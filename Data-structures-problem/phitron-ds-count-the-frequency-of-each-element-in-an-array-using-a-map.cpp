#include <bits/stdc++.h>
using namespace std;

void count_frequency(vector <int> v){
    map <int, int> mp;
    for(int i = 0; i < v.size(); i++){
        mp[v[i]]++;
    }

    for(auto i: mp){
        cout<< i.first<< ": "<< i.second<< "\n";
    }
}

int main(){
    vector <int> v = {1, 2, 2, 6, 5, 5, 5, 6};
    count_frequency(v);

    return 0;
}
