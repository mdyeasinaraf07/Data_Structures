#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
};

class linked_list{
public:
    node* head;
    int size=0;
    linked_list(){
        head = NULL;
    }

//create a new node:
    node* creat_new_node(int value){
        node *new_node = new node;
        new_node->data = value;
        new_node->next = NULL;
        return new_node;
    }



// Insert new value on list head:
    void insert_athead(int value){
        size++;
        node *a = creat_new_node(value);
        if (head==NULL){
           head = a;
            return;
        }
        a->next = head;
        head = a;
    }


//Traverse and print the linked list:
    void traverse(){
        node *a = head;
        while (a!=NULL){
            cout << a->data << " ";
            a = a->next;
        }
       cout << endl;
    }

    int getSize(){
        return size;
    }
    int getValue(int index){
        if (index>=getSize()) return -1;
        node *a = head;
        for(int i=0; i<index;i++){
            a = a->next;
        }
        return a->data;
    }
    void print_reverse(node* pr) {

        if (pr == NULL) {
            return;
        }
        print_reverse(pr->next);
        cout << pr->data << " ";
    }

    void print_reverse() {
        print_reverse(head);
        cout << endl;
    }
    void swap_first(){
        if (size < 2) {
            return;
        }
        node* temp = head->next;
        head->next = temp->next;
        temp->next = head;
        head = temp;
    }

};


int main(){

    linked_list l;
    cout<<l.getSize()<<"\n";
    l.insert_athead(5);
    cout<<l.getSize()<<"\n";
    l.insert_athead(6);
    l.insert_athead(30);
    cout<<l.getSize()<<"\n";
    l.insert_athead(20);
    l.insert_athead(30);

    cout<<l.getValue(2)<<"\n";
    cout<<l.getValue(6)<<"\n";

    l.print_reverse();
    l.traverse();
    l.swap_first();
    l.traverse();
    l.print_reverse();


    return 0;
}


//
//#include <bits/stdc++.h>
//using namespace std;
//
//class node{
//public:
//    int data;
//    node* nxt;
//};
//
//class linkedList{
//public:
//    node* head;
//    int size=0;
//    linkedList(){
//        head = NULL;
//    }
//
//    //create a new node
//    node* creatNewNode(int value){
//        node *newNode = new node;
//        newNode->data = value;
//        newNode->nxt = NULL;
//        return newNode;
//    }
//
//
//
//    // Insert new value on list head
//    void insertAthead(int value){
//        size++;
//        node *a = creatNewNode(value);
//        if (head==NULL){
//           head = a;
//            return;
//        }
//        a->nxt = head;
//        head = a;
//    }


    //Traverse and print the linked list
//    void traverse(){
//        node *a = head;
//        while (a!=NULL){
//            cout << a->data << " ";
//            a = a->nxt;
//        }
//       cout << endl;
//    }
//
//    int getSize(){
//        return size;
//    }
//    int getValue(int index){
//        if (index>=getSize()) return -1;
//        node *a = head;
//        for(int i=0; i<index;i++){
//            a = a->nxt;
//        }
//        return a->data;
//    }
//    void printReverse(node* pr) {
//
//        if (pr == NULL) {
//            return;
//        }
//        printReverse(pr->nxt);
//        cout << pr->data << " ";
//    }
//
//    void printReverse() {
//        printReverse(head);
//        cout << endl;
//    }
//    void swapFirst(){
//        if (size < 2) {
//            return;
//        }
//        node* temp = head->nxt;
//        head->nxt = temp->nxt;
//        temp->nxt = head;
//        head = temp;
//    }
//
//};
//
//
//int main(){
//
//    linkedList l;
//    cout<<l.getSize()<<"\n";
//    l.insertAthead(5);
//    cout<<l.getSize()<<"\n";
//    l.insertAthead(6);
//    l.insertAthead(30);
//    cout<<l.getSize()<<"\n";
//    l.insertAthead(20);
//    l.insertAthead(30);
//
//    cout<<l.getValue(2)<<"\n";
//    cout<<l.getValue(6)<<"\n";
//
//    l.printReverse();
//    l.traverse();
//    l.swapFirst();
//    l.traverse();
//    l.printReverse();
//
//
//    return 0;
//}

