#include <iostream>
#include <iomanip>

using namespacestd;
struct tbstNode {
	int data;
	tbstNode *left;
	tbstNode *right;
	bool rThread;
};

class ThreadedBinarySearchTree {
private:
	// Insert helper function
	ThreadedBinarySearchTree* Insert(ThreadedBinarySearchTree*, int);	
	
public:
	tbstNode* Search(int);
	tbstNode* root;
	tbstNode* curPtr;
	
	// Default constructor
	ThreadedBinarySearchTree();

	// Parameterized constructor
	ThreadedBinarySearchTree(int);

	// Insert function
	void Insert(int);

	// Inorder traversal
	void Inorder(ThreadedBinarySearchTree*);
	
	// Delete
	void remove(tbst<ItemType> *node, ItemType data);
	
	// Copy
	ThreadedBinarySearchTree(const ThreadedBinarySearchTree<ItemType> &tree);
	
	// Remove Even
	void removeEven();
	
	// Operator= overload

	
	// Operator<< overload
	
};
