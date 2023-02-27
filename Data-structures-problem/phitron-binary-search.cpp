#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>> n>> k;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    sort(v.begin() + 0, v.end());
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(k == v[mid]){
            cout<< "YES --> "<< v[mid]<< endl;
            return 0;
        }
        if(k < v[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<< "NO"<< "\n";


    return 0;
}
