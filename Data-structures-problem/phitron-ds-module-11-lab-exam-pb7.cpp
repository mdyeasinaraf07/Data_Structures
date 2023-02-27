#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector <int> vector_(n);
    for(int i = 0; i < n; i++){
        cin>> vector_[i];
    }
    int a, b;
    cin >> a >> b;
    vector_.erase(vector_.begin() + (a - 1), vector_.begin() + b);
    for(int i = 0; i < vector_.size(); i++){
        cout<< vector_[i]<< " ";
    }
    cout<< "\n";


    return 0;
}
