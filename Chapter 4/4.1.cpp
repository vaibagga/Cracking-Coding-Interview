#include "binary_tree.h"
#include <bits/stdc++.h>

using namespace std;

int height(TreeNode* root){
    if (root == NULL)
        return 0;
    return 1 + max(height(root -> left), height(root -> right));
}

bool isBalanced(BinaryTree* root) {
    if (root == NULL)
        return true;
    return isBalanced(root -> left) && isBalanced(root -> right) && abs(height(root -> left) - height(root -> right)) <= 1;
}

int main(){
	return 0;
}