#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void insertNode(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
void deleteNode(struct Node **head_ref, int position)
{
    if (*head_ref == NULL)
    {
        cout<<"SLL is Empty";
        return;
    }
    struct Node *temp = *head_ref;
    if (position == 0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        cout<<"SLL is Empty";
        return;
    }
    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
void printLinkedList(struct Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
    struct Node *head = NULL;
    int size;
    cin>>size;
    if(size<0 || size >1000)
    {exit(0);}
    else{
    for(int i=0;i<size;i++)
    {
        int data; cin>>data;
        if(data>=0 || data<=1000)
        insertNode(&head, data);
        else
        exit(0);
    }
    int index; cin>>index;
    if(index >= size) cout<<"Invalid Position";
    deleteNode(&head, index+1);
    printLinkedList(head);
    }
    return 0;
}