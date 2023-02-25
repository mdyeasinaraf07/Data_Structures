#include <bits/stdc++.h>
using namespace std;

vector <int> merge_v1_v2(vector <int> a, vector <int> b){
    vector <int> merge_done;
    int x = 0;
    int y = 0;
    int length = a.size() + b.size();
    for(int i = 0; i < length; i++){
        if(a.size() == x){
            merge_done.push_back(b[y]);
            y++;
        }
        else if(b.size() == y){
            merge_done.push_back(a[x]);
            x++;
        }
        else if(a[x] > b[y]){
            merge_done.push_back(a[x]);
            x++;
        }
        else{
            merge_done.push_back(b[y]);
            y++;
        }
    }
    return merge_done;
}

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
    for(int i = 0; i < n2; i++){
        cin>> v2[i];
    }
    vector <int> ans = merge_v1_v2(v1, v2);
    for(int i = 0; i < ans.size(); i++){
        cout<< ans[i]<< " ";
    }
    cout<< "\n";


    return 0;
}
