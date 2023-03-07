#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    stack <char> st;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                cout<< "NO\n";
                return 0;
            }
            else if(st.top() == '(' && s[i] == ')'){
                st.pop();
            }
            else if(st.top() == '{' && s[i] == '}'){
                st.pop();
            }
            else if(st.top() == '[' && s[i] == ']'){
                st.pop();
            }
            else{
                cout<< "NO\n";
                return 0;
            }
        }
        i++;
    }

    if(st.empty()){
        cout<< "YES\n";
    }
    else{
        cout<< "NO\n";
    }

    return 0;
}
