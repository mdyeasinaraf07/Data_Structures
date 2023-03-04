#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return factorial(n - 1) * n;
}

int main(){
    int n;
    cin>> n;
    int ans = factorial(n);
    cout<< ans<< "\n";

    return 0;
}
