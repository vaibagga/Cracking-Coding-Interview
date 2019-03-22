#include <bits/stdc++.h>

using namespace std;

// stolen from leetcode discussion
class MinStack {
public:
    stack <int> primaryStack;
    stack <int> minimumStack;    
    void push(int x) {
        primaryStack.push(x);
        if (minimumStack.empty() || x <= getMin())
            minimumStack.push(x);
    }
    
    void pop() {
        if (primaryStack.top() == getMin())
            minimumStack.pop();
        primaryStack.pop();       
    }
    
    int top() {
        return primaryStack.top();        
    }
    
    int getMin() {
        return minimumStack.top();        
    }
};

int main(){
  return 0;
}