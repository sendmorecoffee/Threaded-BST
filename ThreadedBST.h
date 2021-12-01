//template<class ItemType>
class ThreadedBST {

	int data;
	ThreadedBST *left;
	ThreadedBST *right;

public:

	// Default constructor
	ThreadedBST();

	// Parameterized constructor
	ThreadedBST(int);

	// Insert function
	ThreadedBST* Insert(ThreadedBST*, int);

	// Inorder traversal
	void Inorder(ThreadedBST*);
	
};
