#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

Node* removeDuplicates(Node* head){
	Node* temp = head;
	unordered_set <int> values;
	if (temp == NULL || temp -> next == NULL)
		return temp;
	while (temp -> next != NULL){
		if (values.find(temp -> next -> data) == values.end()){
			values.insert(temp -> data);
			temp = temp -> next;
		}
		else{
			temp -> next = temp -> next -> next;
		}
	}
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
	list = removeDuplicates(list);
	list->printList();
	return 0;
}
