#include <bits/stdc++.h>
using namespace std;

void its_palindrome(string s, int i, int j){
    if(i >= j){
        cout<< "YES\n";
        return;
    }
    if(s[i] != s[j]){
        cout<< "NO\n";
        return;
    }
    its_palindrome(s, i + 1, j - 1);
}


int main(){
    string s;
    cin>> s;
    int i = 0;
    int j = s.length() - 1;
    its_palindrome(s, i, j);

    return 0;
}

