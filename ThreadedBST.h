#ifndef ASS5_THREADEDBST_H
#define ASS5_THREADEDBST_H

#include <iostream>
#include <iomanip>

using namespace std;

class BSTNode {
	friend class ThreadedBST;	
private:
	explicit BSTNode(int item);
	int item; //Value
	BSTNode *leftChildPtr; //Left Pointer
	BSTNode *rightChildPtr; //Right Pointer
	bool isThreadedLeft;	//Bool of left Thread
	bool isThreadedRight;	//Bool of Right Thread
};

class ThreadedBST {
	friend ostream &operator<<(ostream &out, const ThreadedBST &tree);

private:
	BSTNode* root = nullptr;

public:
	// Default constructor
	ThreadedBST();
	
	// Parameterized constructor
	explicit ThreadedBST(int rootItem = 0);

	//This is a different method from the one above, 
	// This one creates n number of nodes
	//  in nonincremental order
	ThreadedBST(const int& n);

	//Destructor
	virtual ~ThreadedBST();

	//Get Depth
	int getDepth() const;

	// Insert function
	void Insert(ThreadedBST* root, int item);

	// Remove
	void remove(BSTNode& node, int value);

	// Copy
	ThreadedBST(const ThreadedBST& tree);

	// Remove Even
	void removeEven();

	// Completes an inorder traversal of the threaded BST
	void Inorder();

	// Clear
	void clear();
};
#endif
