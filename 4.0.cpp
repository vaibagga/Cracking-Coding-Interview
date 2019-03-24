//traversals of binary tree


#include "binary_tree.h"
#include <bits/stdc++.h>

using namespace std;

void printInorder(BinaryTree* root){
	if (root == NULL)
		return;
	printInorder(root -> left);
	cout << root -> data << " ";
	printInorder(root -> right);
}

void printPreorder(BinaryTree* root){
	if (root == NULL)
		return;
	cout << root -> data << " ";
	printInorder(root -> left);
	printInorder(root -> right);
}

void printPostorder(BinaryTree* root){
	if (root == NULL)
		return;
	printPostorder(root -> left);
	printPostorder(root -> right);
	cout << root -> data << " ";
}

void levelOrder(BinaryTree* root) {
    queue <BinaryTree*> q;
    if (root)
        return;
    vector <vector <int> > ans;
    while (!q.empty()){
        int n = q.size();
        vector <int> curr;
        for (int i = 0; i < n; i++){
            BinaryTree* temp = q.front();
            cout << temp -> data << " ";
            if (temp -> left)
                q.push(temp -> left);
            if (temp -> right)
                q.push(temp -> right);
            q.pop();
        }
        cout << endl;
    }
}

int main(){
	return 0;
}