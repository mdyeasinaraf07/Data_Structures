#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};
Node* create_node(int value){
    Node* new_node = new Node;
    new_node-> data = value;
    new_node-> next = NULL;
    return new_node;
}
/////////////////////////////////////////////
void insert_at_head(Node*& head, int value){
    Node* create_new_node = create_node(value);
    if(head == NULL){
        head = create_new_node;
        return;
    }
    else{
        create_new_node-> next = head;
        head = create_new_node;
    }
}


/////////////////////////////////////////////
void print_linked_list(Node* head){
    while(head != NULL){
        cout<< head-> data<< " ";
        head = head-> next;
    }
    cout<< "\n";
}

/////////////////////////////////////////////
int get_size(Node* head){
     // O(size of linked list) = O(n)
    int sz = 0;
    while(head != NULL){
        sz++;
        head = head-> next;
    }
    return sz;
}

/////////////////////////////////////////////
void insert_at_any_index(Node*& head, int index, int value){
    int sizee = get_size(head);
    if(index < 0 || index > sizee){
        return;
    }
    if(index == 0){
        insert_at_head(head, value);
        return;
    }
    int current_index = 0;
    Node* temp = head;
    while(current_index != index - 1){
        temp = temp-> next;
        current_index++;
    }
    Node* new_node = create_node(value);
    new_node-> next = temp-> next;
     temp-> next = new_node;
}


/////////////////////////////////////////////
void find_value(Node* head, int n){
    int countt = 0;
    while(head != NULL){
        if(head-> data == n){
            countt = 1;
            cout<< "Your enter number is found in this linked list.\n";
            return;
        }
        else{
            countt = 0;
        }
        head = head-> next;
    }

    cout<< "Your enter number is (NOT) found in this linked list.\n";
}



/////////////////////////////////////////////
void delete_at_head(Node*& head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head = temp-> next;
    delete temp;
}



/////////////////////////////////////////////
void delete_any_index(Node*& head, int index){
    int sizee = get_size(head);
    if(index < 0 || index > sizee - 1){
        return;
    }
    if(head == NULL){
        return;
    }
    Node* temp1 = head;
    int current_index = 0;
    while(current_index != index - 1){
        temp1 = temp1-> next;
        current_index++;
    }
    Node* temp2 = temp1-> next;
    temp1-> next = temp2-> next;
    delete temp2;
}


/////////////////////////////////////////////
void insert_after_value(Node* head, int value, int push_value){
    Node* temp = head;
    while(temp != NULL){
        if(temp-> data == value){
            break;
        }
        temp = temp-> next;
    }
    if(temp == NULL){
        cout<< "Your value is doesn't exist in this linked list\n";
    }
    Node* new_node = create_node(push_value);
    new_node-> next = temp-> next;
    temp-> next = new_node;
}


/////////////////////////////////////////////
void reverse_print(Node* head){
    if(head == NULL){
        return;
    }
    reverse_print(head-> next);
    cout<< head-> data<< " ";
}

/////////////////////////////////////////////
int main(){
    Node* head = NULL;

    insert_at_head(head, 5);
    insert_at_head(head, 10);
    insert_at_head(head, 15);
    insert_at_head(head, 20);

    print_linked_list(head);

    int linked_list_size;

    cout<< "linked list size is = "<< get_size(head)<< "\n";

    find_value(head, 20);

    cout<< "After insert a value:  ";
    insert_at_any_index(head, 3, 200);
    print_linked_list(head);

    linked_list_size = get_size(head);
    cout<< "linked list size is = "<< get_size(head)<< "\n";

    delete_at_head(head);
    print_linked_list(head);
    cout<< "linked list size is = "<< get_size(head)<< "\n";


    delete_any_index(head, 3);
    print_linked_list(head);
    cout<< "linked list size is = "<< get_size(head)<< "\n";

    insert_after_value(head, 200, 500);
    print_linked_list(head);
    cout<< "linked list size is = "<< get_size(head)<< "\n";


    reverse_print(head);


    return 0;
}
