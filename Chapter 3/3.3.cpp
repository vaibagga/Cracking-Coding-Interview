// set of stacks

#include <bits/stdc++.h>
using namespace std;

class SetOfStacks{
  int capacity=0;  //max capacity after which new stack is formed
  int maxCols=0;
  int topCol=0; //the column of the stack
  int topRow=0;
  int **data;
  public:
  SetOfStacks(int, int);
  void push(int);
  void pop();
  int top();
  bool isEmpty();
};

SetOfStacks :: SetOfStacks(int cols, int cap){
  capacity = cap;
  maxCols = cols;
  data = new int* [maxCols];
  for (int i = 0; i < cols; i++){
    data[i] = new int [capacity];
  }
  topCol = -1;
  topRow = -1;
}


void SetOfStacks :: push (int item){
  //Overflow
  if (topCol == maxCols - 1 && topRow == capacity - 1){
    cout << "Overflow\n";
    return;
  }
  if (topRow == capacity - 1){
    topRow = 0;
    topCol++;
  }
  else{
    topRow++;
  }
  data[topCol][topRow] = item;
}

void SetOfStacks :: pop(){
  if (topRow == -1){
    cout << "Underflow";
    return;
  }
  if (topRow == 0){
    topCol--;
    topRow = capacity - 1;
  }
  else{
    topRow--;
  }
}

int SetOfStacks :: top(){
  if (topRow == -1){
    cout << "Underflow";
    return INT_MIN;
  }
  return data[topCol][topRow];
}

int main(){
  cout << "Stack Implemented\n";
  return 0;
}
