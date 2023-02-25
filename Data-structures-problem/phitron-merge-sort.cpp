#include <bits/stdc++.h>
using namespace std;

vector <int> merge_sort(vector <int> a){
    if(a.size() <= 1){
        return a;
    }
    int mid = a.size() / 2;
    vector <int> b;
    vector <int> c;
    for(int i = 0; i < mid; i++){
        b.push_back(a[i]);
    }
    for(int i = mid; i < a.size(); i++){
        c.push_back(a[i]);
    }
    vector <int> sorted_b = merge_sort(b);
    vector <int> sorted_c = merge_sort(c);
    vector <int> sorted_done;
    int x = 0;
    int y = 0;
    for(int i = 0; i < a.size(); i++){
        if(sorted_b.size() == x){
            sorted_done.push_back(sorted_c[y]);
            y++;
        }
        else if(sorted_c.size() == y){
            sorted_done.push_back(sorted_b[x]);
            x++;
        }
        else if(sorted_b[x] < sorted_c[y]){
            sorted_done.push_back(sorted_b[x]);
            x++;
        }
        else{
            sorted_done.push_back(sorted_c[y]);
            y++;
        }
    }
    return sorted_done;
}

int main(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    vector <int> sorted_v = merge_sort(v);
    for(int i = 0; i < sorted_v.size(); i++){
        cout<< sorted_v[i]<< "\n";
    }

    return 0;
}
