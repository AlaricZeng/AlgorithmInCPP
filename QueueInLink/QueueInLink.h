/**
File: QueueInLink.h
Function: Create a class about a linked list 
          for any type value
Author: AlaricZeng
Date: 03/26/2017
**/

#include <iostream>
using namespace std;

/*
A class for nodes in linked list,
each store a value
*/
template <class T>
class Node
{
public:
	T value;
	Node* next;
};

template <class T>

class LinkedList
{
private:
	Node<T>* head;
	Node<T>* tail;
	int listLength;
	int currentLength;
public:
	LinkedList(int listLength);
	bool EnQueue(Node<T>* newNode);
	bool DeQueue();
	void printList();
};

template <class T>
LinkedList<T>::LinkedList(int listLength)
{
	head = tail = NULL;
	this -> listLength = listLength; 
	this -> currentLength = 0;
}

template <class T>
bool LinkedList<T>::EnQueue(Node<T>* newNode)
{
	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
		head -> next = NULL;
		currentLength++;
		return true;
	}
	else
	{
		if (currentLength < listLength)
		{
			tail -> next = newNode;
			tail = newNode;
			currentLength++;
			return true;
		}
		else
		{
			cout << "Queue Full" << endl;
			return false;
		}
	}
}

template <class T>
bool LinkedList<T>::DeQueue()
{
	if (head != NULL || currentLength != 0)
	{
		Node<T>* tempNode = head;
		head = head -> next;
		delete tempNode;
		currentLength--;
		return true;
	}
	else
	{
		cout << "Queue is empty" << endl;
		return false;
	}
}

template <class T>
void LinkedList<T>::printList()
{
	Node<T>* frontNode = head;
	while (frontNode != NULL)
	{
		cout << frontNode -> value << " ";
		frontNode = frontNode -> next;
	}
	cout << endl;
}

