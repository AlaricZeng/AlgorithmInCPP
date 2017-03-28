/**
File: QueueInLink.cpp
Function: Use LinkedList class in QueueInLink.h
          Implication a queue for integer add and delete
Author: AlaricZeng
Date: 03/26/2017
**/

#include <iostream>
#include <stdlib.h>
#include <string>
#include "QueueInLink.h"
using namespace std;

//split the string by space and return 
//a string in n position
string SplitString(string, int);
int main()
{
	int nInputNum;

	cout << "Please input the number of items in queue: ";
	cin >> nInputNum;

	LinkedList<int> queue = LinkedList<int>(nInputNum);
	
	cout << "Now operating queue" << endl;
	string nOperNum;
	getline(cin, nOperNum);
	while (nOperNum != "q")
	{
		string nOper = SplitString(nOperNum, 0);
		if (nOper == "add")
		{
			string nNum = SplitString(nOperNum, 1);
			Node<int>* newNode = new Node<int>();
			newNode -> value = atoi(nNum.c_str());
			newNode -> next = NULL; 
			queue.EnQueue(newNode);
			queue.printList();
		}
		else if (nOper == "del")
		{
			queue.DeQueue();
			queue.printList();
		}
		getline(cin, nOperNum);
	} 

	return 0;
}

string SplitString(string str, int position)
{
	string splitstr = "";
	int item = 0;
	for (int i = 0; i < position; i++)
	{
		while (str[item] != ' ' && item < str.length())
		{
			item++;
		}
		item++;
	}

	while (str[item] != ' ' && item < str.length())
	{
		splitstr += str[item];
		item++;
	}

	return splitstr;
}