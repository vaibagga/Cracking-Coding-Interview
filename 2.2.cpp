#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

Node* nthLast(Node* head, int n){
	Node* slow = head;
	Node* fast = head;
	for (int i = 0; i < n && fast; i++){
		fast = fast -> next;
	}
	while (fast){
		slow = slow -> next;
		fast = fast -> next;
	}
	return slow;
}


int main(){
	Node* list = new Node(1);;
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list -> printList();
	cout << nthLast(list,1)-> data << endl;
	cout << nthLast(list,7)-> data << endl;
	return 0;
}
