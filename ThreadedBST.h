#include <iostream>
#include <iomanip>

using namespacestd;
struct tbstNode {
	int data;
	tbstNode *left;
	tbstNode *right;
	bool rThread;
};

class ThreadedBST {	
	friend ostream &operator<<(ostream &out, const SkipList &skip);
	
public:
	tbstNode* Search(int);
	tbstNode* root;
	tbstNode* curPtr;
	
	// Default constructor
	ThreadedBST();

	// Parameterized constructor
	ThreadedBST(int rootItem);

	// Insert function
	ThreadedBST* Insert(ThreadedBST* root, int value);

	// Completes an inorder traversal of the threaded BST
	void Inorder(ThreadedBST* root);
	
	// Delete
	bool deleteTBSTNode(ThreadedBST* root, int target);
	
	// Copy
	ThreadedBST* copyThreadedBST(ThreadedBST* root);
	
	// Remove Even
	void removeEven();
	
	// Clear
	void clear()
};















