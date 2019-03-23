#include <bits/stdc++.h>

using namespace std;


void intsertSorted(stack <int> &st, int element){
	
}

void sortStack(stack <int> &st){
	if (st.empty())
		return;
	int element = st.top();
	st.pop();
	insertSorted(st, element);

}



int main(){
	
}