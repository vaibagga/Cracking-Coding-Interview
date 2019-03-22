#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

// function to check cycle
bool hasCycle(Node *head) {
    if (head == NULL || head -> next == NULL)
        return false;
    Node* slow = head;
    Node* fast = head -> next;
    while (slow  && fast  && fast -> next){
        if (slow == fast)
            return true;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return false;
}


Node *detectCycle(Node *head) {
    if (head == NULL || head -> next == NULL)
        return NULL;
    Node* slow = head -> next;
    Node* fast = head -> next -> next;
    while (fast && fast -> next){
        if (slow == fast)
            break;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    if (slow != fast)
        return NULL;
    slow = head;
    while (slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;
}


int main(){
	return 0;
}