#include <bits/stdc++.h>

using namespace std;


stack <int> insertSorted(stack <int> st, int element){
	if (st.empty() || st.top() >= element){
		st.push(element);
		return  st;
	}
	int temp = st.top();
	st.pop();
	insertSorted(st, element);
	st.push(temp);
	return st;
}

stack <int> sortStack(stack <int> &st){
	if (st.empty())
		return st;
	stack <int> sortedStack;
	while (!st.empty()){
		sortedStack = insertSorted(sortedStack, st.top());
		st.pop();
	}
	return sortedStack;
}



int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		stack <int> st;
		for (int i = 0; i < n; i++){
			int element;
			cin >> element;
			st.push(element);
		}
		stack <int> sorted =sortStack(st);
		while (!sorted.empty()){
			cout << sorted.top() << " ";
			sorted.pop();
		} 
		cout << endl;
	}
	return 0;
	
}