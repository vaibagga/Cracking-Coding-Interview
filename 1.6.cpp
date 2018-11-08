#include <iostream>
using namespace std;

void printMat(int **a, int m, int n){
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
}

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void invert(int **a, int m, int n){
/*  for (int i = 0; i < m/2; i++){
      for (int j = 0; j < n/2; j++){
        swap(&a[i][j], &a[j][i]);
      }
    }
  */
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      if (i < j)
      swap(&a[i][j], &a[j][i]);
    }
  }
    for (int j = 0; j < n/2; j++){
      for (int i = 0; i < n; i++){
        swap(&a[i][j], &a[i][n - j - 1]);
      }
    }

}

int main(){
  int t;
  cin >> t;
  while (t--){
    int m, n;
    cin >> m >> n;
    int **a = new int * [m];
    for (int i = 0; i < m; i++){
      a[i] = new int [m];
      for (int j = 0; j < n; j++)
        cin >> a[i][j];
    }
    invert(a, m, n);
    printMat(a, m, n);
  }
  return 0;
}
