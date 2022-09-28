#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;
void push(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void printStack()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void pop()
{
    if (head == NULL)
        cout << "Stack underflow\n";
    else
    {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(6);
    push(7);
    push(8);
    printStack();
    cout << "Head popped\n";
    pop();
    printStack();
    return 0;
}