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
        if(s[i] >= '0' && s[i] <= '9'){
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

    stack <int> st2;
    int temp1, temp2;
    int j = 0;
    int result = 0;
    while(ans[j] != '\0'){
        if(ans[j] >= '0' && ans[j] <= '9'){
            st2.push(ans[j] - '0');
        }
        else{
            temp2 = st2.top();
            st2.pop();
            temp1 = st2.top();
            st2.pop();
            if(ans[j] == '+'){
                result = temp1 + temp2;
                st2.push(result);
            }
            else if(ans[j] == '-'){
                result = temp1 - temp2;
                st2.push(result);
            }
            else if(ans[j] == '*'){
                result = temp1 * temp2;
                st2.push(result);
            }
            else{
                result = temp1 / temp2;
                st2.push(result);
            }
        }
        j++;
    }

    cout<< result<< "\n";

    return 0;
}
