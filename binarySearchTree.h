#ifndef binarySearchTree
#define binarySearchTree

enum TraversalType { preorder = 0, inorder = 1, postorder = 2 };

typedef struct binarySearchTreeNode {
  int value;
  struct binarySearchTreeNode* left;
  struct binarySearchTreeNode* right;
} binarySearchTreeNode;

typedef struct binarySearchTreeAPIStruct {

  // Adds the value to the binary search tree
  binarySearchTreeNode* (* const Add)(binarySearchTreeNode* subtree, int value);

  // Removes the value from the binary search tree
  binarySearchTreeNode* (* const Remove)(binarySearchTreeNode* subtree, int value);

  // prints the binarySearchTree to the stdout
  void (* const Print)(binarySearchTreeNode* subtree);

  // Returns a string that describes the binary search tree.
  char* (* const ToString)(binarySearchTreeNode* root, int traversalType);
} binarySearchTreeAPIStruct;

binarySearchTreeAPIStruct const binarySearchTreeAPI;

#endif
