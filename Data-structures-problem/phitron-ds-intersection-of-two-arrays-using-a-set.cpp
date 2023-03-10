#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    cin>> n1;
    vector <int> v1(n1);
    for(int i = 0; i < n1; i++){
        cin>> v1[i];
    }
    int n2;
    cin>> n2;
    vector <int> v2(n2);
    set <int> st1;
    for(int i = 0; i < n2; i++){
        cin>> v2[i];
        st1.insert(v2[i]);
    }
    set <int> st2;
    for(int i = 0; i < n1; i++){
        if(st1.find(v1[i]) != st1.end()){
            st2.insert(v1[i]);
            st1.erase(st1.find(v1[i]));
        }
    }

    for(auto i: st2){
        cout<< i<< " ";
    }
    cout<< "\n";




    return 0;
}
