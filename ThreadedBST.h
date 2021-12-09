#include <iostream>
#include <iomanip>

template <class ItemType> struct BSTNode
{
private:
	ItemType item; //Value
	BSTNode <ItemType> *leftChildPtr; //Left Pointer
	BSTNode <ItemType> *rightChildPtr; //Right Pointer
	bool isThreadedLeft;	//Bool of left Thread
	bool isThreadedRight;	//Bool of Right Thread
	explicit BSTNode(int item) {
		leftChildPtr = NULL;
		rightChildPtr = NULL;
		isThreadedLeft = false;
		isThreadedRight = false;
	}

};

using namespace std;

class ThreadedBST {
private:
	friend ostream &operator<<(ostream &out, const ThreadedBST &tree);
	
	

public:
	// Parameterized constructor
	ThreadedBST(ItemType rootItem);

	//This is a different method from the one above, This one creates n number of nodes
	//in nonincremental order
	ThreadedBST(const int &n);

  	//Destructor
  	~ThreadedBST();

 	//Get Depth
  	int getDepth() const;

	// Insert function
	ThreadedBST* Insert(ThreadedBST* root, ItemType value);

	// Remove
	void remove(BSTNode<ItemType> *node, ItemType value);

	// Copy
	ThreadedBST(const ThreadedBST<ItemType> &tree);

	
	// Instead of this function, shuold we instead just pass a vector of the even numbers into the remove function from main?
	// Remove Even
	void removeEven();

 	// Completes an inorder traversal of the threaded BST
 	void Inorder();

	// Clear
	void clear();

};
