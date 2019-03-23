#include <bits/stdc++.h>

using namespace std;

stack<int> sortStack(stack<int> &input){ 
    stack<int> ans; 
    while (!input.empty()){ 
        int temp = input.top(); 
        input.pop();  
        while (!ans.empty() && ans.top() > temp){ 
            input.push(ans.top()); 
            ans.pop(); 
        }   
        ans.push(temp); 
    } 
    return ans; 
} 

int main(){
	stack<int> input; 
    input.push(34); 
    input.push(3); 
    input.push(31); 
    input.push(98); 
    input.push(92); 
    input.push(23); 
    stack<int> tmpStack = sortStack(input); 
    while (!tmpStack.empty()) { 
        cout << tmpStack.top()<< " "; 
        tmpStack.pop(); 
    } 
	return 0;
}