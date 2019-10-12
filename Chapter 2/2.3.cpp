#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

Node* deleteMiddle(Node* head, Node* del){
	del -> data = del -> next -> data;
	Node* temp = del -> next;
	del -> next = del -> next -> next;
	delete(temp);
	return head;
}


int main(){
	Node* list = new Node(1);
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list -> printList();
	cout << endl;
	list = deleteMiddle(list, list -> next -> next -> next);
	list -> printList();
	cout << endl;
	return 0;
}
