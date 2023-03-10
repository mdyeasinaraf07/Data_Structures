#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    multiset <char> mst;
    int i = 0;
    while(s[i] != '\0'){
        mst.insert(s[i]);
        i++;
    }
    for(auto i: mst){
        cout<< i;
    }
    cout<< "\n";


    return 0;
}
