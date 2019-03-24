#ifndef binary_search_tree

#define binary_search_tree

class BST{
public:
	int data;
	BST* left;
	BST* right;
	BST(int);
	BST* insertValue(int)
};

BST :: BST(int value){
	this -> data = value;
}

BST* BST :: insertIntoBST(TreeNode* root, int val) {
    if (root == NULL){
        TreeNode* ans = new TreeNode(val);
        return ans;
    }
    if (root -> val >= val){
        root -> left = insertIntoBST(root -> left, val);
    }
    else{
        root -> right = insertIntoBST(root -> right, val);
    }        
    return root;
}

#endif