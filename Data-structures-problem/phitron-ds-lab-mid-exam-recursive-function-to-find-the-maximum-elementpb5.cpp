#include <bits/stdc++.h>
using namespace std;

int find_maximum(vector <int> vectorr, int index, int maxi){
    if(vectorr.size() <= 1){
        return vectorr[0];
    }
    if(index > vectorr.size() - 1){
        return maxi;
    }
    if(maxi < vectorr[index]){
        maxi = vectorr[index];
    }

    return find_maximum(vectorr, index + 1, maxi);
}

int main(){
    int n;
    cin>> n;
    vector <int> vectorr(n);
    for(int i = 0; i < n; i++){
        cin>> vectorr[i];
    }

    int maxi = find_maximum(vectorr, 0, 0);
    cout<< maxi<< "\n";

    return 0;
}
