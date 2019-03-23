#ifndef binarytree

#define binarytree

class BinaryTree(){
	private:
		BinaryTree* left;
		BinaryTree* right;
		int data;
	public:
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