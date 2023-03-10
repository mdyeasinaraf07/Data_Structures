#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset <int> mst;

    mst.insert(10);
    mst.insert(5);
    mst.insert(15);
    mst.insert(7);
    mst.insert(2);
    mst.insert(5);
    mst.insert(7);
    mst.insert(5);
    mst.insert(10);

    for(auto i: mst){
        cout<< i<< " ";
    }
    cout<< "\n";

    mst.erase(5);     // all same value is deleted.
    for(auto i: mst){
        cout<< i<< " ";
    }
    cout<< "\n";

    mst.erase(mst.find(7)); // all same value is not deleted.
    for(auto i: mst){
        cout<< i<< " ";
    }
    cout<< "\n";

    cout<< "size: "<< mst.size()<< "\n";

    return 0;
}
