#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


// remove duplicate characters without extra space


// Method1: Using 2 loops no extra space
string removeDuplicate(string s){
  int n = s.length();
  string ans = "";
  for (int i = 0; i < n; i++){
    bool repeat = false;
    for (int j = 0; j < ans.length(); j++){
      if (ans[j] == s[i]){
        repeat = true;
        break;  
      }
    }
    if (!repeat)
      ans += s[i];
  }
  return ans; 
}




int main(){
  int t;
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    cout << removeDuplicate(s) << endl;
  }
}
