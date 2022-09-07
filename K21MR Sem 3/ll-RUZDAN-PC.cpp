#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};
Node* head = NULL;
void insert(int d) {
    Node* ptr;
    Node* n = new Node;
    n->data = d;
    n->next = NULL;
    if(head == NULL) {
        head = n;
    }
    else {
        ptr = head;
        while (ptr->next != NULL) {
        ptr = ptr->next;
        }
        ptr->next = n;
    }
}
void traverse() {
    Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
void deletefirstNode() {
    if(head == NULL) {
        cout<<"Linked list is empty";
    }
    else {
        head = head->next;
    }
}
void deleteLastNode() {
    if(head == NULL) {
        cout<<"Linked list is empty";
    }
    else if(head->next == NULL) {
        head = NULL;
    }
    else {
        Node* ptr = head;
        while((ptr->next)->next != NULL)
            ptr = ptr->next;
        ptr->next = NULL;
        cout<<"last node deleted";
    }
}
int main() {
    int ch = 1,i,x;
    while (ch != 0) {
        cout<<"\nPress:\n1. to inssert new node.\n2. To delete first node.\n3. To delete last node.\n4. To traverse.\n0. to exit.";
        cin>>ch;
        if(ch == 1) {
            cout<<"Enter data to insert";
            cin>>x;
            insert(x);
        }
        else if(ch == 2) {
            deletefirstNode();
        }
        else if(ch == 3){
            deleteLastNode();
        }
        else if(ch == 4) {
            traverse();
        }
    }
}