#include <bits/stdc++.h>
using namespace std;

// issubstring method
bool isSubstring(string s1, string s2){ //s1 is substring of s2
  int m = s1.length();
  int n = s2.length();
  if (m > n)
    return false;
  if (m == n)
    return s1 == s2;
  for (int i = 0; i < n - m; i++){
    if (s1 == s2.substr(i, m))
      return true;
  }
  return false;
}

bool rotations(string s1, string s2){
  int m = s1.length();
  int n = s2.length();
  if (m != n)
    return false;
  return isSubstring(s1, s2 + s2);
}

int main(void){
  int t;
  cin >> t;
  while (t--){
    string s1, s2;
    cin >> s1 >> s2;
    cout << rotations(s1, s2) << "\n";
  }
  return 0;
}
