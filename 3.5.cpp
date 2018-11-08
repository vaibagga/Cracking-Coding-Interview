#include <bits/stdc++.h>
using namespace std;
class QueueStack{
  private:
    stack <int> pushStack;
    stack <int> popStack;
  public:
    QueueStack();
    void enqueue(int);
    int dequeue();
    int front();
};

void QueueStack :: enqueue(int element){
  pushStack.push(element);      // O(1) operation
}

int QueueStack :: dequeue(){
  if (pushStack.empty()){   //underflow condition
    cout << "Underflow\n";
    return INT_MIN;
  }
  while (!pushStack.empty()){
    int temp = pushStack.top();
    pushStack.pop();
    popStack.push(temp);
  }
  int elem = popStack.top();
  popStack.pop();
  while (!popStack.empty()){
    int temp = popStack.top();
    popStack.pop();
    pushStack.push(temp);
  }
  return elem;
}

int QueueStack :: front(){
  if (pushStack.empty()){   //underflow condition
    cout << "Underflow\n";
    return INT_MIN;
  }
  while (!pushStack.empty()){
    int temp = pushStack.top();
    pushStack.pop();
    popStack.push(temp);
  }
  int elem = popStack.top();
  while (!popStack.empty()){
    int temp = popStack.top();
    popStack.pop();
    pushStack.push(temp);
  }
  return elem;
}

QueueStack :: QueueStack(){

}
int main(){
  QueueStack q;
  q.enqueue(1);
  q.enqueue(2);
  cout << q.front();
  q.dequeue();
  cout << q.front();
}
