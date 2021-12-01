#include <iostream>
#include "ThreadedBST.h"

using namespace std;

// Default Constructor
ThreadedBST::ThreadedBST() {
  this->data = 0;
  this->left = NULL;
  this->right = NULL;
	}

ThreadedBST::ThreadedBST(int value) {
	this->data = value;
	this->left = right = NULL;
}

ThreadedBST* ThreadedBST::Insert(ThreadedBST* root, int value) {
	if (!root) {
		//Insert first node, if first root NULL
		return new ThreadedBST(value);
	}
	
	//Insert data
	if(value > root->data) {
		// Insert right node data, if the 'value'
    // to be inserted is greater than 'root' node data.
 
    // Process right nodes.
		root->right = Insert(root->right, value);
	} else {
		// Insert left node data, if the 'value'
    // to be inserted is greater than 'root' node data.
 
    // Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion
	return root;
}

void ThreadedBST::Inorder(ThreadedBST* root) {
	if (!root){
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}
