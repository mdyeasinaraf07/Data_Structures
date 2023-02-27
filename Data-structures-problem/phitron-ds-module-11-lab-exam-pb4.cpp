#include <bits/stdc++.h>
using namespace std;

int subset(vector <int> vector1, vector <int> vector2, int n1, int n2){
    int i = 0;
    int j = 0;
    bool x = true;
    while(i < n1){
        if(vector1[i] == vector2[j]){
            x = true;
            i++;
        }
        else if(vector1[i] > vector2[j]){
            j++;
        }
        else{
            return 0;
        }
    }
    if(x == true){
        return 1;
    }

    return 0;
}

int main(){
    int n1;
    cin>> n1;
    vector <int> vector1(n1);
    for(int i = 0; i < n1; i++){
        cin>> vector1[i];
    }
    int n2;
    cin>> n2;
    vector <int> vector2(n2);
    for(int i = 0; i < n2; i++){
        cin>> vector2[i];
    }
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());
    int ans = subset(vector1, vector2, n1, n2);
    if(ans == true){
        cout<< "YES\n";
    }
    else{
        cout<< "NO\n";
    }

    return 0;
}

