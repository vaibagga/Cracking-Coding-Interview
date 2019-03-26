#include <bits/stdc++.h>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


bool  hasPath(TreeNode* root, TreeNode* node, vector <TreeNode*> &path){
    if (root == NULL)
        return false;
    path.push_back(root);
    if (root == node)
        return true;
    if (hasPath(root -> left, node, path)|| hasPath(root -> right, node, path))
        return true;
    path.pop_back();     
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <TreeNode*> path1, path2;
        bool ret = hasPath(root, p, path1);
        ret = hasPath(root, q, path2);
        TreeNode* lca = NULL;
        for (int i = 0; i < min(path1.size(), path2.size()); i++){
            if (path1[i] == path2[i])
                lca = path1[i];
        }
        return lca;
        
    }

int main(){return 0;}