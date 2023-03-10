#include <bits/stdc++.h>
using namespace std;

class max_heap{
public:
    vector <int> nodes;
    max_heap(){

    }

    void up_heapify(int index){
        while(index > 0 && nodes[index] > nodes[(index - 1) / 2]){
            swap(nodes[index] , nodes[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void insert_at_heap(int value){
        nodes.push_back(value);
        up_heapify(nodes.size() - 1);
    }

    void print_heap(){
        for(int i = 0; i < nodes.size(); i++){
            cout<< nodes[i] << " ";
        }
        cout<< "\n";
    }
};

int main(){
    max_heap heap;

    heap.insert_at_heap(5);
    heap.insert_at_heap(10);
    heap.insert_at_heap(15);
    heap.insert_at_heap(20);

    heap.print_heap();

    heap.insert_at_heap(13);

    heap.print_heap();

    heap.insert_at_heap(16);
    heap.print_heap();


    return 0;
}
