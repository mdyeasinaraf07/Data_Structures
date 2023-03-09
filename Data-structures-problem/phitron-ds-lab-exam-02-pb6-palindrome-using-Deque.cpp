#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    deque <char> ch;
    int i = 0;
    while(s[i] != '\0'){
        ch.push_back(s[i]);
        i++;
    }
    while(ch.size() > 1){
        if(ch.front() != ch.back()){
            cout<< "NO\n";
            return 0;
        }
        ch.pop_front();
        ch.pop_back();
    }
    cout<< "YES\n";

    return 0;
}
