#include <bits/stdc++.h>
using namespace std;
#ifndef LINKED_LIST
#define LINKED_LIST

class Node{
	private:
		Node* next;
		int data;
	public:
		Node(int);
		void printList();
		Node* addToHead(int);
		Node* addToTail(int);

};

Node :: Node(int val){
	this -> data = val;
	this -> next = NULL;
}


void Node :: printList(){
	Node* temp = this;
	while (temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}

Node* Node :: addToHead(int val){
	Node* temp = new Node(val);
	temp -> next = this;
	return temp;
}

Node* Node :: addToTail(int val){
	Node* temp = this;
	Node* temp2 = new Node(val);
	while (temp -> next != NULL)
		temp = temp -> next;
	temp -> next = temp2;
	return this;
}

/*
Testing the functions
int main(){
	Node* list = new Node(1);;
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list->printList();
}
*/

#endif