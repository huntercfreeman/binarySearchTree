#include <stdlib.h>
#include <stdio.h>
#include "binarySearchTree.h"

int main()
{
  binarySearchTreeNode* root = (binarySearchTreeNode*)malloc(sizeof(binarySearchTreeNode));
  root->value = 50;
  root->left = NULL;
  root->right = NULL;
  binarySearchTreeAPI.Add(root, 25);
  binarySearchTreeAPI.Add(root, 15);
  binarySearchTreeAPI.Add(root, 75);
  binarySearchTreeAPI.Add(root, 85);
  binarySearchTreeAPI.Add(root, 35);
  binarySearchTreeAPI.Add(root, 65);
  binarySearchTreeAPI.Add(root, 40);
  binarySearchTreeAPI.Add(root, 45);
  binarySearchTreeAPI.Add(root, 44);
  binarySearchTreeAPI.Print(root);

  root = binarySearchTreeAPI.Remove(root, 50);
  binarySearchTreeAPI.Print(root);

  printf("%s\n", binarySearchTreeAPI.ToString(root, preorder));
  printf("%s\n", binarySearchTreeAPI.ToString(root, inorder));
  printf("%s\n", binarySearchTreeAPI.ToString(root, postorder));

  return 0;
}
