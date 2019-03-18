#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

int main(){
	Node* list = new Node(1);;
	list = list->addToHead(2);
	list = list->addToTail(3);
	list = list->addToTail(4);
	list->printList();
	return 0;
}
