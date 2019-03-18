#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


// method1: sorting
bool anagrams(string s1, string s2){
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  return s1 == s2;
}


// method2: hash table
bool anagrams2(string s1, string s2){
  unordered_map <char, int> m1, m2;
  for (auto i: s1)
    m1[i]++;
  for (auto i: s2)
    m2[i]++;
  return (m1.size() == m2.size()) && equal(m1.begin(), m1.end(), m2.begin());
} 



int main(){
  int t;
  cin >> t;
  while (t--){
    string s1, s2;
    cin >> s1 >> s2;
    cout << anagrams(s) << endl;
    cout << anagrams2(s) << endl;
  }
  return 0;
}
