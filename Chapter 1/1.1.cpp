#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


// check string contains all unique characrters


// Method1: Using a hashset
bool allUnique(string s){
  unordered_set <char> ch;
  for (int i = 0; i < s.length(); i++){
    if (ch.find(s[i]) != ch.end())
      return false;
    ch.insert(s[i]);
  }
  return true;
}

// Method2: Using an array
bool allUnique2(string s){
	bool present[256];
	// mark all elements as not present 
	for (int i = 0; i < 256; i++)
		present[i] = false;
	for (auto i: s){
		if (present[i])
			return false;
		present[i] = true;
	}
	return true;
}


int main(){
  int t;
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    cout << allUnique(s) << endl;
    cout << allUnique2(s) << endl;
  }
}
