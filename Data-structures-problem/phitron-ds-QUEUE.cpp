#include <bits/stdc++.h>
using namespace std;

int main(){
//    int n = 5;
//    vector <int> vectorr = {1, 2, 3, 4, 5};
//    queue <int> q;
//    for(int i = 0; i < n; i++){
//        q.push(vectorr[i]);
//    }

    queue <int> q;

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout<< q.front()<< "\n";
    cout<< "Size = "<< q.size()<< endl;

    q.pop();
    cout<< q.front()<< "\n";
    cout<< "Size = "<< q.size()<< endl;

    q.pop();
    cout<< q.front()<< "\n";
    cout<< "Size = "<< q.size()<< endl;

    q.pop();
    cout<< q.front()<< "\n";
    cout<< "Size = "<< q.size()<< endl;

    q.pop();
    //When queue is empty:
    cout<< q.front()<< "\n";
    cout<< "Size = "<< q.size()<< endl;
    cout<< q.empty()<< "\n";

    return 0;
}
