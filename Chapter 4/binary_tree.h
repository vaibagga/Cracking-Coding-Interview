#ifndef binary_tree

#define binary_tree

class BinaryTree{
	public:
		BinaryTree* left;
		BinaryTree* right;
		int data;
		BinaryTree(int);
		int getValue();
};

BinaryTree::BinaryTree(int value){
	this -> data = value;
}

int BinaryTree :: getValue(){
	return this -> data;
}

#endif