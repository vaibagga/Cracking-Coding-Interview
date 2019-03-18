// set entire row col to 0
#include <bits/stdc++.h>
using namespace std;

// usitlity for printing matrix
void printMat(int **a, int m, int n){
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++)
      cout << a[i][j] << " ";
    cout << "\n";
  }
}


void setToZero(int **a, int m, int n){
  unordered_set <int> rows;
  unordered_set <int> cols;
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      if (a[i][j] == 0){
        rows.insert(i);
        cols.insert(j);
      }
    }
  }
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      if (rows.find(i) != rows.end() || cols.find(j) != cols.end())
        a[i][j] = 0;
    }
  }
}

int main(){
  int t;
  cin >> t;
  while (t--){
    int m, n;
    cin >> m >> n;
    int **a = new int* [m];
    for (int i = 0; i < m; i++){
      a[i] = new int [m];
      for (int j = 0; j < n; j++)
        cin >> a[i][j];
    }
    setToZero(a, m, n);
    printMat(a, m, n);
  }
}
