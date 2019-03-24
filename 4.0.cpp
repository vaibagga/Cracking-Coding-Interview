//traversals of binary tree


#include "binary_tree.h"
#include <bits/stdc++.h>

using namespace std;

void printInorder(BinaryTree* root){
	if (root == NULL)
		return;
	printInorder(root -> left);
	cout << root -> data << endl;
	printInorder(root -> right);
}

void printPreorder(BinaryTree* root){
	if (root == NULL)
		return;
}

int main(){
	return 0;
}