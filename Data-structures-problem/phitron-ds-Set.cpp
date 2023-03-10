#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int> st;

    st.insert(10);
    st.insert(5);
    st.insert(7);
    st.insert(15);
    st.insert(5);
    st.insert(7);
    st.insert(2);

    //set e choto theke boro sorted hoye jay and
    //set eakoi value eakta thakle oi value r ney na.

    for(auto i: st){
        cout<< i<< " ";
    }
    cout<< "\n";
    cout<< "set size: "<< st.size()<< "\n";

    st.erase(15);
    for(auto i: st){
        cout<< i<< " ";
    }
    cout<< "\n";

    if(st.find(2) != st.end()){
        cout<< "2 is found \n";
    }
    else{
        cout<< "2 is not found\n";
    }


    return 0;
}
