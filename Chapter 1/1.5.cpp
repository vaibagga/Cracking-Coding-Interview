#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


// method1: sorting
void replaceSpaces(string &s){
  string ans = "";
  for (int i = 0; i < s.length(); i++){
    if (s[i] == ' ')
      ans += "%20";
    else
      ans += s[i];
  }
  s = ans;
}


int main(){
  int t;
  cin >> t;
  while (t--){
    string s;
    getline(cin, s);
    replaceSpaces(s);
    cout << s << endl;
  }
  return 0;
}
