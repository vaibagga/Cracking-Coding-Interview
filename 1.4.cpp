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
  int count1[256], count2[256];
  for (int i = 0; i < 256; i++){
    count1[i] = 0;
    count2[i] = 0;
  }
  for (auto i: s1)
    count1[i]++;
  for (auto i: s2)
    count2[i]++;
  for (int i = 0; i < 256; i++){
    if (count1[i] != count2[i])
      return false;
  }
  return true;
} 



int main(){
  int t;
  cin >> t;
  while (t--){
    string s1, s2;
    cin >> s1 >> s2;
    cout << anagrams(s1, s2) << endl;
    cout << anagrams2(s1, s2) << endl;
  }
  return 0;
}
