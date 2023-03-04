#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* pre;
};

class Doubly_linked_list{
public:
    Node* head;
    int sizee;
    Doubly_linked_list(){
        head = NULL;
        sizee = 0;
    }
///////////////////////////////////////////
    Node* create_new_node(int value){
        Node* new_node = new Node;
        new_node->data = value;
        new_node->next = NULL;
        new_node->pre = NULL;
        return new_node;
    }

//////////////////////////////////////////////////////////
    void insert_at_head(int value){
        Node* new_node = create_new_node(value);
        sizee++;
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        new_node->next = temp;
        temp->pre = new_node;
        head = new_node;
    }

/////////////////////////////////////////////
    int get_size(){
        return sizee;
    }
///////////////////////////////////////////////////

    void print_doubly_linked_list(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data<< " ";
            temp = temp->next;
        }
        cout<< "\n";
    }

////////////////////////////////////////////////////
    void insert_at_any_index(int index, int value){
        if(index < 0 || index > sizee){
            return;
        }
        if(index == 0){
            insert_at_head(value);
            return;
        }
        sizee++;
        Node* temp1 = head;
        int current_index = 0;
        while(current_index != index - 1){
            temp1 = temp1->next;
            current_index++;
        }
        Node* new_node = create_new_node(value);
        new_node->next = temp1->next;
        new_node->pre = temp1;

        Node* temp2 = temp1-> next;
        if(temp2 != NULL){
            temp2->pre = new_node;
        }
        temp1->next = new_node;

    }


///////////////////////////////////////////
    void delete_index(int index){
        if(index >= sizee){
            return;
        }

        Node* temp = head;
        int current_index = 0;
        while(current_index != index){
            temp = temp->next;
            current_index++;
        }
        Node* a = temp->pre;
        Node* b = temp->next;
        if(a != NULL){
            a->next = b;
        }
        if(b != NULL){
            b->pre = a;
        }
        delete temp;

        if(index == 0){
            head = b;
        }
        sizee--;
    }

//////////////////////////////////////
    void Dll_reverse(){
        if(head == NULL){
            return;
        }

        Node* temp = head;
        int current_index = 0;
        while(current_index != sizee - 1){
            temp = temp->next;
            current_index++;
        }
        Node* a = head;
        while(a != NULL){
            swap(a->next, a->pre);
            a = a->pre;
        }
        head = temp;
    }

};

int main(){
    Doubly_linked_list dll;

    dll.insert_at_head(10);
    dll.insert_at_head(20);
    dll.insert_at_head(30);
    dll.insert_at_head(40);
    dll.insert_at_head(50);

    dll.print_doubly_linked_list();
    cout<< dll.get_size()<<"\n";

    dll.insert_at_any_index(5, 200);

    dll.print_doubly_linked_list();
    cout<< dll.get_size()<<"\n";

    dll.delete_index(0);
    dll.print_doubly_linked_list();
    cout<< dll.get_size()<<"\n";

    dll.Dll_reverse();
    dll.print_doubly_linked_list();

    return 0;
}
