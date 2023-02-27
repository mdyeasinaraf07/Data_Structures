#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector <int> vector_(n);
    for(int i = 0 ; i< n; i++){
        cin>> vector_[i];
    }
    int k;
    cin>> k;
    int low = 0;
    int high = vector_.size();
    int mid_index = 0;

    while(low <= high){
        int mid = (low + high) / 2;
        if(vector_[mid] == k){
            if(vector_[mid - 1] == k || vector_[mid + 1] == k){
                cout<< "YES\n";
            }
            else{
                cout<< "NO\n";
            }
            return 0;
        }
        else if(vector_[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return 0;
}
