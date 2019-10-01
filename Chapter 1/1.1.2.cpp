#include <bits/stdc++.h>
using namespace std;

bool allUnique(string s){
  sort(s.begin(), s.end());
  for (int i = 1; i < s.length(); i++){
    if (s[i] == s[i - 1])
      return false;
  }
  return true;
}

int main(){
  int t;
  char s[10000];
  cin >> t;
  while (t--){
    cin >> s;
    cout << allUnique(s) << endl;
  }
}
