#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;


// Tested on leetcode
Node* addTwoLists(Node *first, Node *second, int rem = 0){
    Node *ans = new Node(0);
    if (first == NULL && second == NULL){
        if (rem == 0)
            return NULL;
        ans -> data = rem;
        ans -> next = NULL;
        return ans;
    }
    else if (first == NULL){
        ans -> data = (second -> data + rem) % 10;
        rem = (second -> data+ rem) / 10;
        ans -> next = addTwoLists(first, second -> next, rem);
    }
    else if (second == NULL){
        ans -> data= (first -> data + rem) % 10;
        rem = (first -> data + rem) / 10;
        ans -> next = addTwoLists(first -> next, second, rem);
    }
    else{
        ans -> data = (second -> data + first -> data + rem) % 10;
        rem = (first -> data + second -> data + rem) / 10;
        ans -> next = addTwoLists(first -> next, second -> next, rem);
    }
    return ans;
}

int main(){
    return 0;
}


