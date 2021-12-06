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

  //Destructor
  ~ThreadedBST();
  
  //Get Depth
  int getDepth() const;

	// Insert function
	ThreadedBST* Insert(ThreadedBST* root, int value);

	// Completes an inorder traversal of the threaded BST
	void Inorder(ThreadedBST* root);
	
	// Delete

	void remove(tbst<ItemType> *node, ItemType data);
	
	// Copy
	ThreadedBST(const ThreadedBST<ItemType> &tree);
	
	// Remove Even
	void removeEven();
	
  //Inorder Traverse for testing
  void inorderTraverse();
  
  //I don't think we need these. 
	// Operator= overload
	// Operator<< overload
	

	// Clear
	void clear()

};















