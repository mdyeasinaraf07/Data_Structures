#include <bits/stdc++.h>
using namespace std;

int digit(int value){
    int countt = 0;
    while(value != 0){
        value /= 10;
        countt++;
    }
    return countt;
}

int main(){
    int n;
    cin>> n;
    vector <int> v1(n);
    vector <int> v2(n);
    for(int i = 0; i < n; i++){
        cin>> v1[i];
    }
    for(int i = 0; i < n; i++){
        cin>> v2[i];
    }
    priority_queue <int> pq1;
    priority_queue <int> pq2;
    for(int i = 0; i < n; i++){
        pq1.push(v1[i]);
        pq2.push(v2[i]);
    }
    int ans = 0;
    while(pq1.size()){
        int x = pq1.top();
        int y = pq2.top();
        if(x == y){
            pq1.pop();
            pq2.pop();
        }
        else if(x > y){
            pq1.pop();
            pq1.push(digit(x));
            ans++;
        }
        else{
            pq2.pop();
            pq2.push(digit(y));
            ans++;
        }
    }
    cout<< ans<< "\n";

    return 0;
}
