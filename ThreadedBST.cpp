
#include <iostream>
#include "ThreadedBST.h"

using namespace std;

BSTNode::BSTNode(int item) {
	this->item = item;
	this->leftChildPtr = nullptr;
	this->rightChildPtr = nullptr;
	this->isThreadedLeft = false;
	this->isThreadedRight = false;
}

ThreadedBST::ThreadedBST(int item) { //TODO
	
}

void ThreadedBST::Insert(ThreadedBST* root, int item) {
    	
	// start with the root node
    BSTNode *curr = root; 
    // pointer to store the parent of the current node
    BSTNode *parent = nullptr;
 
    // if the tree is empty, create a new node and set it as root
    if (root == nullptr) {
        root = new BSTNode(item);
        return;
    }

    // traverse the tree and find the parent node of the given item
    while (curr != nullptr) {
        // update the parent to the current node
        parent = curr;
 
        // if the given item is less than the current node, go to the
        // left subtree; otherwise, go to the right subtree.
        if (item < curr->item) {
            if (curr->isThreadedLeft == true) {
				break;
			} else {
				curr = curr->leftChildPtr;
			}			
        } else {
            if (curr->isThreadedRight == true) {
				break;
			} else {
				curr = curr->rightChildPtr;
			}
        }
    } //end while loop
 
    // construct a node and assign it to the appropriate parent pointer
	BSTNode* newNode = new BSTNode(item);
	newNode->isThreadedRight = newNode->isThreadedLeft = true;	

	if (item < parent->item) {
		//set newNode's left ptr to its parent's old left ptr
		newNode->leftChildPtr = parent->leftChildPtr;
		//newNode's right ptr points back at parent
		newNode->rightChildPtr = parent;
		//parent points to newNode
		parent->leftChildPtr = newNode;
		//set parent's isThreadedLeft(bool) to false as it now has 
		// a lwft node
		parent->isThreadedLeft = false;
	} else {
		newNode->rightChildPtr = parent->rightChildPtr;
		newNode->leftChildPtr = parent;
		parent->rightChildPtr = newNode;
		parent->isThreadedRight = false;
	}
}


void ThreadedBST::Inorder(ThreadedBST* root) { //TODO
	if (!root){
		return;
	}
	Inorder(root->leftChildPtr);
	cout << root->data << endl;
	Inorder(root->rightChildPtr);
}
