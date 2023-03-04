#include <bits/stdc++.h>
using namespace std;

int minimum_coins_count_for_n(int n){
    vector <int> coins = {1, 3, 4};
    if(n == 0){
        return 0;
    }
    int ans = 1000000;
    for(int i = 0; i < coins.size(); i++){
        if(n >= coins[i]){
            ans = min(ans, 1 + minimum_coins_count_for_n(n - coins[i]));
        }
    }
    return ans;
}


int main(){
    int n;
    cin>> n;
    int ans = minimum_coins_count_for_n(n);
    cout<< ans<< "\n";

    return 0;
}
