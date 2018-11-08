#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool allUnique(string s){
  unordered_set <char> ch;
  for (int i = 0; i < s.length(); i++){
    if (ch.find(s[i]) != ch.end())
      return false;
    ch.insert(s[i]);
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
  }
}
