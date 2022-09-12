#include <bits/stdc++.h>
using namespace std;
class Node // general Node declaration
{
public:
    int data;
    Node *next;
};

Node *head = NULL; // global head pointer

void insertAtEnd(int data)
{
    Node *newNode = new Node;
    newNode->data = data; // insert data into data part of node
    newNode->next = NULL; // assign NULL to the next of the node

    if (head == NULL)
    {
        head = newNode; // if list is empty then make new node as head
    }
    // else if list is not empty then traverse to the end of the list and then add the element
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode; // change the next of the last node to the new node
    }
}

// function to print the list
void printList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//function to insert node after a given value
void insertAfterNode(int key, int data)
{
    Node *newNode = new Node; //make new node
    newNode->data = data;
    Node *temp = head;
    while (temp != NULL) //iterate till the end of list
    {
        if (head == NULL) //if list is empty
        {
            insertAtEnd(data); //insert data at end (single element only)
        }
        else
        {
            if (temp->data == key) //if given node is found
            {
                // (this given sequence MUST be followed)
                // point new node to the next of the key node
                newNode->next = temp->next;
                // point key to the new node
                temp->next = newNode;
            }
            temp = temp->next; // move pointer forward
        }
    }
}

int main()
{
    // inserting element in the end of the list
    insertAtEnd(6);
    insertAtEnd(5);
    insertAtEnd(4);
    insertAtEnd(3);

    insertAfterNode(5, 99); //function call to insert 99 after node containing value 5

    printList(); // function call to print the list
    return 0;
}