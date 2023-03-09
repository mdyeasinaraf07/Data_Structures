#include <bits/stdc++.h>
using namespace std;

template <class T>
class node{
public:
    T data;
    node* next;
    node* prv;
};

template <class T>
class Deque{
public:
    node<T>* head;
    node<T>* tail;
    int size;

    Deque(){ //constructor
        head = NULL;
        tail =NULL;
        size = 0;
    }

    // Create newNode and retun the node
    node <T>* createNewNode(T value){
        node <T>* newNode = new node<T>;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    //Push back Deqe O(1)
    void pushBack(T value){
        node <T>* newNode = createNewNode(value);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        newNode->prv = tail;
        tail = newNode;
        size++;
    }

    // Push front
    void pushFront(T value){
        node <T>* newNode = createNewNode(value);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        head->prv = newNode;
        newNode->next = head;
        head = newNode;
        size++;
    }

    //Pop Back O(1)
    void popBack(){
        if(size == 0){
            cout << "The Deque is Empty\n";
            return;
        }
        if(size == 1){
            delete tail;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node <T>* a = tail;
        tail = tail->prv;
        delete a;
        tail->next = NULL;
        size--;
    }

    //Pop Front O(1)
    void popFront(){
        if(size == 0){
            cout << "The Deque is Empty\n";
            return;
        }
        if(size == 1){
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node <T> *a = head;
        head = head->next;
        delete a;
        head->prv = NULL;
        size--;
    }

    T front(){
         if(size == 0){
            cout << "The Deque is Empty\n";
            T a;
            return a;
        }
        return head->data;
    }

    T back(){
         if(size == 0){
            cout << "The Deque is Empty\n";
            T a;
            return a;
        }
        return tail->data;
    }
    int getSize(){
        return size;
    }

};

int main(){

    Deque <int> d;
    d.pushBack(5);
    d.pushBack(10);
    cout << "Back: "<< d.back()<< "\n";
    cout<< " Front: "<< d.front()<< "\n";
    d.pushFront(15);
    d.pushFront(20);
    cout<< "back: "<< d.back()<< "\n";
    cout<< "Front: " << d.front() << "\n";
    d.popBack();
    cout<<"back: "<< d.back()<< "\n";
    cout<<" Front: "<< d.front() << "\n";
    d.popFront();
    cout<< "back: " << d.back()<< "\n";
    cout<< " Front: "<< d.front()<< "\n";

    Deque<string> s;
    s.pushBack("hi");
    s.pushBack("hello");
    cout<< "back: "<< s.back()<< "\n";
    cout<< " Front: " << s.front()<< "\n";
    s.pushFront("Towfik");
    s.pushFront("Sakib");
    cout << "back: " << s.back()<< "\n";
    cout<< " Front: "<< s.front()<<"\n";
    s.popBack();
    cout<< "back: "<< s.back()<< "\n";
    cout<< " Front: "<< s.front() << "\n";
    s.popFront();
    cout << "back: " << s.back()<< "\n";
    cout<< " Front: "<< s.front()<< "\n";

    return 0;
}

