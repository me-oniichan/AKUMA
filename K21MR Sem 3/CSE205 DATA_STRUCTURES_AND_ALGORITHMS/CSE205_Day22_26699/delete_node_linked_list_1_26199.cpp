#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node *head = NULL;
void push(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
        temp = temp->next;
        temp->next = newNode;
    }
}
void display()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    int size, data, index;
    cin>>size;
    if(size<0 || size >1000)
    exit(0);
    else
    {
        for(int i=0;i<size;i++)
        {
            cin>>data;
            if(data>=0 || data <=1000)
            push(data);
            else
            exit(0);
        }
        // cin>>index;
        // delete(index);
        display();
    }
}