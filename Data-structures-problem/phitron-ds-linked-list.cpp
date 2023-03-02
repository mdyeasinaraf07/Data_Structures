#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        this-> data = value;
        this-> next = NULL;
    }
};
void insert_at_head(Node*& head, int value){
    Node* create_new_node = new Node(value);
    if(head == NULL){
        head = create_new_node;
        return;
    }
    else{
        create_new_node-> next = head;
        head = create_new_node;
    }
}
void print_linked_list(Node* head){
    while(head != NULL){
        cout<< head-> data<< " ";
        head = head-> next;
    }
    cout<< "\n";
}

int main(){
    Node* head = NULL;
    insert_at_head(head, 5);
    insert_at_head(head, 10);
    insert_at_head(head, 15);
    insert_at_head(head, 20);

    print_linked_list(head);

    return 0;
}
