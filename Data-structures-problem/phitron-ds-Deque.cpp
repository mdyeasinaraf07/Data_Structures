#include <bits/stdc++.h>
using namespace std;

int main(){
    deque <int> dq;

    dq.push_back(5);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    cout<< dq.front()<< "\n";
    cout<< dq.size()<< "\n";

    dq.push_front(50);
    cout<< dq.front()<< "\n";

    dq.pop_back();
    dq.pop_front();
    cout<< dq.back()<< "\n";


    return 0;
}
