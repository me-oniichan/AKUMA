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
    if(head == NULL)
    newNode->next = NULL;
    else
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
        cout << "-1";
    else
    {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}
int main()
{
    while (true)
    {
        int choice, data;
        cin >> choice;
        if (choice == 1)
        {
            cin >> data;
            push(data);
        }
        else if (choice == 2)
            pop();
        else
        {
            printStack();
            break;
        }
    }
    return 0;
}