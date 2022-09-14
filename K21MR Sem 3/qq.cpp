#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* top = NULL;
void push(int data)
{
    Node* n = new Node;
    n->data = data;
    n->next = top;
    top = n;
}
void pop()
{
    if(top == NULL) cout<<"under";
    else{
        top = top->next;
    }
}
void display()
{
    Node* ptr;
    if(top == NULL)
    {
        cout<<"Empty";
    }
    else
    {
        ptr = top;
        cout<<"Stack elements are: ";
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
}
int main()
{
    push(10);
    push(11);
    push(12);
    display();
    pop();
    display();
    return 0;
}