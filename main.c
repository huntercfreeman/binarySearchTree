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
  binarySearchTreeAPI.Print(root);

  return 0;
}
