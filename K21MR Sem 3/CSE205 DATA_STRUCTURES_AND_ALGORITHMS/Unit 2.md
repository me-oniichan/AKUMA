# Linked List

## Insertion at the beginning of the list

```cpp
#include <bits/stdc++.h>
using namespace std;
class Node // general Node declaration
{
public:
	int data;
	Node *next;
};

Node *head = NULL; // global head pointer

void insertAtHead(int data)
{
	Node *newNode = new Node;
	Node *ptr;
	newNode->data = data; // insert data into data part of node
	newNode->next = head; // point head ot next of the added node
	head = newNode;		  // head will contain pointer of the newly added node
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

int main()
{
	// inserting element in the front of the list
	insertAtHead(6);
	insertAtHead(5);
	insertAtHead(4);
	insertAtHead(3);
	
	printList(); // function call to print the list

	return 0;
}
```

---

## Insert at the end of the list

```cpp
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

	if(head == NULL){
		head = newNode; // if list is empty then make new node as head
	}
	// else if list is not empty then traverse to the end of the list and then add the element
	else{
		Node *temp = head;
		while(temp->next != NULL)
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

int main()
{
	// inserting element in the end of the list
	insertAtEnd(6);
	insertAtEnd(5);
	insertAtEnd(4);
	insertAtEnd(3);
	
	printList(); // function call to print the list

	return 0;
}
```

---

## Insertion at a given position

```cpp
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

	if(head == NULL){
		head = newNode; // if list is empty then make new node as head
	}
	// else if list is not empty then traverse to the end of the list and then add the element
	else{
		Node *temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = newNode; // change the next of the last node to the new node
	}
}

// function to insert data at a given position
void insertAtPos(int data, int pos)
{
	Node *newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	// if position is 1 then insert at head
	if(pos == 1){
		newNode->next = head;
		head = newNode;
	}	
	// else iterate to find the given position and then insert
	else{
		Node *temp = head;
		for(int i = 1; i < pos - 1; i++){
			if(temp != NULL){
				temp = temp->next;
			}
		}

		if(temp != NULL){
			newNode->next = temp->next;
			temp->next = newNode;
		}
		else{
			cout<<"The prev node is null.";
		}
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

int main()
{
	// inserting element in the end of the list
	insertAtEnd(6);
	insertAtEnd(5);
	insertAtEnd(4);
	insertAtEnd(3);
	
	// insert element at a given position
	insertAtPos(100,2);
	insertAtPos(499,4);

	printList(); // function call to print the list

	return 0;
}
```