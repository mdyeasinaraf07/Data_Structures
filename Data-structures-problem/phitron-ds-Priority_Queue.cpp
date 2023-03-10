#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(50);
    pq.push(40);
    pq.push(15);

    // pq.top() = return max element;
    // pq.pop() = delete max element;

    while(pq.size() != 0){
        cout<< pq.top() << "\n";
        pq.pop();
    }

    return 0;
}
