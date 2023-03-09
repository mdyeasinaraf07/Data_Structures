#include <bits/stdc++.h>
using namespace std;

template <class T>
class node{
public:
    T data;
    node* nxt;
};

template <class T>
class linkedList{
public:
    node <T>* head;
    int size;
    linkedList(){
        head = NULL;
        int size = 0;
    }

    //create a new node
    node <T>* creatNewNode(T value){
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    // Insert new value on list head
    void insertAthead(T value){
        size++;
        node <T> *a = creatNewNode(value);
        if (head==NULL){
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    //Size of linked list
    int getSize(){
        return size;
    }

    //Delete a valu from head
    void deleteAtHead(){
        if (head == NULL){
            cout<<"No velue for delete\n";
            return;
        }
        size--;
        node <T> *a = head;
        head = a->nxt;
        delete a;
    }

};

template <class T>
class Stack{
public:
    linkedList<T> dl;
    T top(){
        if(dl.getSize()==0){
            cout<< "Error\n";
            T a;
            return a;
        }
        return dl.head->data ;
    }
    void push(T value){
        dl.insertAthead(value);
    }
    void pop(){
        if(dl.getSize()==0){
            cout<< "Error\n";
            return;
        }
        dl.deleteAtHead();
    }
};
int main(){
    Stack <double> st;
    st.push(4.65);
    cout << st.top()<< "\n";
    st.push(21.473);
    cout << st.top()<< "\n";
    st.push(662.20);
    cout << st.top()<< "\n";
    st.pop();
    cout << st.top()<< "\n";
    st.pop();
    cout << st.top()<< "\n";
    st.pop();
    cout << st.top()<< "\n"<< "\n";


    Stack<char> s;
    s.push('h');
    s.push('l');
    s.push('w');
    cout << s.top() <<  "\n";
    s.pop();
    cout << s.top() <<  "\n";
    s.pop();
    cout << s.top() <<  "\n";
    s.pop();
    cout << s.top() <<  "\n";

    return 0;
}

