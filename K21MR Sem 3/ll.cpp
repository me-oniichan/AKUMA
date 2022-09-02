#include <bits/stdc++.h>
using namespace std;
class Node // general Node declaration
{
public:
	int data;
	Node *next;
};

Node *head = NULL; // global head pointer

void push(int data)
{
	Node *newNode = new Node;
	newNode->data = data; // insert data into data part of node

	if (head == NULL)
	{
		head = newNode; // if list is empty then make new node as head
		newNode->next = head;
	}
	// else if list is not empty then traverse to the end of the list and then add the element
	else
	{
		Node *temp = head;
		while (temp->next != head){
			temp = temp->next;
		}
		newNode->next = head;
		temp->next = newNode; // change the next of the last node to the new node
	}
}

// function to print the list
void printList()
{
	Node *temp = head;
	cout << head->data << " " ;
	temp = temp->next;
	while (temp != head)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

void InsertAtBeg(int d){
	Node* newNode = new Node;
	newNode->data = d;
	if(head == NULL){
		head = newNode;
		newNode->next = head;
	}
	else{
		newNode->next = head;
	}
}

int main()
{
	int x;
	cout << "Enter number of elements: ";
	cin >> x;
	// inserting element in the end of the list
	while(x--)
	{
		int n; 
		cin >> n;
		push(n);
	}

	printList(); // function call to print the list

	int input;
	cout << "Header insertion element: ";
	cin >> input;

	InsertAtBeg(input);
	return 0;
}