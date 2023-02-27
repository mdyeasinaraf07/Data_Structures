#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector <int> vector_(n + 1);
    int temp;
    for(int i = 1; i < n; i++){
        cin>> temp;
        vector_[temp]++;
    }
    for(int i = 1; i <= n; i++){
        if(vector_[i] == 0){
            cout<< i<< "\n";
            return 0;
        }
    }

    return 0;
}
