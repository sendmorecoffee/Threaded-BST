#include <iostream>
#include "ThreadedBST.h"

using namespace std;

// Driver code
int main()
{
    ThreadedBST newTree, *root = NULL;
    root = newTree.Insert(root, 5);
    newTree.Insert(root, 3);
    newTree.Insert(root, 2);
    newTree.Insert(root, 4);
    newTree.Insert(root, 7);
    newTree.Insert(root, 6);
    newTree.Insert(root, 8);
 
    newTree.Inorder(root);
    return 0;
}

