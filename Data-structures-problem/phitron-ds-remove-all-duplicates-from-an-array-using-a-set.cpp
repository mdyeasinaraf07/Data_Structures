#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector <int> v(n);
    set <int> st;
    for(int i = 0; i < n; i++){
        cin>> v[i];
        st.insert(v[i]);
    }
    for(auto i: st){
        cout<< i<< " ";
    }
    cout<< "\n";



    return 0;
}
