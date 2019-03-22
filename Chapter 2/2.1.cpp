#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

Node* removeDuplicates(Node* head){
	if (head == NULL || head -> next == NULL)
		return head;
	Node* prev = head;
	Node* curr = head -> next;
	unordered_set <int> values;
	values.insert(head -> data);
	while (curr){
		if (values.find(curr -> data) != values.end()){
			curr = curr -> next;
		}
		else{
			values.insert(curr -> data);
			prev -> next = curr;
			curr = curr -> next;
			prev = prev -> next;
		}
	}
	prev -> next= NULL;
	return head;
}


Node* removeDuplicates2(Node* head){
	if (head == NULL || head -> next == NULL)
		return head;
	Node* prev = head;
	Node* curr = head -> next;
	while (curr){
		bool found = false;
		Node* temp = head;
		while (temp != curr && temp != NULL){
			if (temp -> data == curr -> data){
				found = true;
				break;
			}
			temp = temp -> next;
		}
		if (found){
			curr = curr -> next;
		}
		else{
			prev -> next = curr;
			curr = curr -> next;
			prev = prev -> next;
		}
	}
	prev -> next= NULL;
	return head;
}


int main(){
	Node* list = new Node(1);;
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list->printList();
	cout << "\n";
	list = removeDuplicates2(list);
	list->printList();
	return 0;
}
