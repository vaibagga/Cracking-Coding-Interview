#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *arrayToBST(int a[], int start, int end){
    if (start > end){
	    return NULL;
    }
    int mid = (start + end)/2;
    Node *bst = new Node();
    bst -> data = a[mid];
    bst -> left = arrayToBST(a, start, mid - 1);
    bst -> right = arrayToBST(a, mid + 1, end);
    return bst;
}

void preorder(Node *tree) {
    if (tree == NULL)
        return;
    cout << tree -> data << " ";
    preorder(tree -> left);
    preorder(tree -> right);
}
int main() {
    int t=0;
    cin >> t;
    while (t--){
        int n=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        Node *ans = arrayToBST(a, 0, n - 1);
        preorder(ans);
        cout << endl;
    }
	
	return 0;
}
