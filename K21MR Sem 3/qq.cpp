#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
    return;
}
void deleteNode(Node **head_ref, Node *del)
{
    if (*head_ref == NULL || del == NULL)
        return;
    if (*head_ref == del)
        *head_ref = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;
    if (del->prev != NULL)
        del->prev->next = del->next;
    free(del);

    return;
}
void deleteOddNodes(Node **head_ref, int counter)
{
    Node *ptr = *head_ref;
    Node *next;
    int count = 0;
    while (ptr != NULL)
    {
        next = ptr->next;
        if (ptr->data % 2 != 0)
        {
            deleteNode(head_ref, ptr);
        }
        else
        {
            count++;
        }
        ptr = next;
    }
    if (count == counter)
    {
        cout << "No student is having odd roll number";
        exit(0);
    }
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    int t;
    cin >> t;
    int counter = t;
    if ((t < 3) || (t > 12))
    {
        cout << "Wrong Input";
        exit(0);
    }
    else
    {
        while (t--)
        {
            int x;
            cin >> x;
            append(&head, x);
        }
        deleteOddNodes(&head, counter);
        printList(head);
    }
    return 0;
}