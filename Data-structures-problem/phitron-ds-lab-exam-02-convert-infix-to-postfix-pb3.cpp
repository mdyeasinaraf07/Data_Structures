#include <bits/stdc++.h>
using namespace std;

int valuee(char ch){
    if(ch == '+' || ch == '-'){
        return 1;
    }
    else if(ch == '*' || ch == '/'){
        return 2;
    }

    return 0;
}

int main(){
    string s;
    cin>> s;
    stack <char> st;
    string ans = "";
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= 'a' && s[i] <= 'z'){
            ans += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(st.size() && valuee(st.top()) >= valuee(s[i])){
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(st.size()){
        ans += st.top();
        st.pop();
    }
    cout<< ans<< "\n";

    return 0;
}
