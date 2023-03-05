#include <bits/stdc++.h>
using namespace std;

void Reverse(vector <int> vectorr){
    for(int i = 0, j = vectorr.size() - 1; i <= j; i++, j--){
        swap(vectorr[i], vectorr[j]);
    }
    for(int i = 0 ; i < vectorr.size(); i++){
        cout<< vectorr[i]<< " ";
    }
    cout<< "\n";
}

int main(){
    int n;
    cin>> n;
    vector <int> vectorr(n);
    for(int i = 0; i < n; i++){
        cin>> vectorr[i];
    }
    Reverse(vectorr);


    return 0;
}

