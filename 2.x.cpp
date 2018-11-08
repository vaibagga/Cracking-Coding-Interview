#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;
};
//2.1
void removeDuplicatesHelper(Node *head){
  set <int> vals;
  Node *curr = head;
  Node *prev = NULL;
  while (curr != NULL){
    if (vals.find(curr -> data) != vals.end()){
        prev -> next = curr -> next;
        delete(curr);
    }
    else{
        vals.insert(curr -> data);
        prev = curr;
    }
    curr = prev -> next;
  }
}
//2.2
int nthToLast(Node *head, int n){
  Node *fast = head;
  Node *slow = head;
  for (int i = 0; i < n && fast != NULL; i++){
    fast = fast -> next;
  }
  while (fast != NULL){
    slow = slow -> next;
    fast = fast -> next;
  }
  return slow -> data;
}

//2.3
void deleteMiddle(Node *head){
  if (head == NULL)
    return;
  if (head -> next == NULL)
    delete head;
  Node *fast = head;
  Node *slow = head;
  Node *prev;
  while (fast != NULL && fast -> next != NULL){
    prev = slow;
    slow = slow -> next;
    fast = fast -> next -> next;
  }
  prev -> next = slow -> next;
  delete slow;

}

//2.4

Node* addTwoLists_(Node *first, Node *second, int rem){
    Node *ans = new Node();
    if (first == NULL && second == NULL){
        if (rem == 0)
            return NULL;
        ans -> data = rem;
        ans -> next = NULL;
        return ans;
    }
    else if (first == NULL){
        ans -> data = (second -> data + rem) % 10;
        rem = (second -> data + rem) / 10;
        ans -> next = addTwoLists_(first, second -> next, rem);
    }
    else if (second == NULL){
        ans -> data = (first -> data + rem) % 10;
        rem = (first -> data + rem) / 10;
        ans -> next = addTwoLists_(first -> next, second, rem);
    }
    else{
        ans -> data = (second -> data + first -> data + rem) % 10;
        rem = (first -> data + second -> data + rem) / 10;
        ans -> next = addTwoLists_(first -> next, second -> next, rem);
    }
    return ans;
}

Node*  addTwoLists(Node* first, Node* second){
  // Code here
  Node* ans = addTwoLists_(first, second, 0);
  return ans;
}


int main(){
  cout << "Contains Linked List functions\n";
  return 0;
}
