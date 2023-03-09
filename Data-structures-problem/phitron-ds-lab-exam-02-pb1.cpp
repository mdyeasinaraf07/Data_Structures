#include <bits/stdc++.h>
using namespace std;

template <class T>
class Queue{
public:
    T *a;
    int arrCap;
    int l,r;
    int sz;
    Queue(){
        a = new T[1];
        l = 0;
        r = -1;
        sz = 0;
        arrCap = 1;
    }

    void removeCircular(){
        if(l>r){
            T *tamp = new T[arrCap];
            int idx =0;
            for (int i = l; i < arrCap; i++){
                tamp[idx] = a[i];
                idx++;
            }
            for (int i = 0; i < r; i++){
                tamp[idx] = a[i];
                idx++;
            }
            swap(tamp,a);
            delete []tamp;
        }

    }

    void increaseSize(){
        removeCircular();
        T *tamp = new T[arrCap*2];
        for (int i = 0; i < arrCap; i++){
            tamp[i] = a[i];
        }
        swap(a,tamp);
        arrCap *= 2;
        delete []tamp;
    }

    // Push element on Queue
    void enqueue(T value){
        if(sz == arrCap){
            increaseSize();
        }
        r++;
        if( r == arrCap){
            r = 0;
        }
        a[r] = value;
        sz++;
    }


    // Pop element on Queue
    void dequeue(){
        if(sz == 0){
            cout << "Queue is empty\n";
            return;
        }

        if(l > r){
            cout << "Queue is empty\n";
            return;
        }
        l++;
         if(l == arrCap){
            l = 0;
        }
        sz--;
    }

    // Top element on Queue
    T front(){
        if(sz == 0){
            cout << "Queue is empty\n";
            T a;
            return a;
        }
        return a[l];
    }

    // Size of Queue
    int Size(){
        return sz;
    }



};

int main(){

    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue Size is = "<<  q.Size()<< "\n";
    cout << q.front()<< "\n";
    q.dequeue();
    cout << q.front()<< "\n";
    q.dequeue();
    cout << q.front()<< "\n" << "\n";
    Queue <string> s;
    s.enqueue("Towfik");
    s.enqueue("Sakib");
    s.enqueue("Shefat");
    cout << "Queue Size is = "<<  s.Size()<< "\n";
    cout << s.front()<< "\n";
    s.dequeue();
    cout << s.front()<< "\n";
    s.dequeue();
    cout << s.front()<< "\n";

    return 0;
}

