#include <stdio.h>
#include <stdlib.h>
#include "binarySearchTree.h"
#include "stringBuilder.h"

static binarySearchTreeNode* Add(binarySearchTreeNode* subtree, int value)
{
  if(subtree == NULL) return NULL;

  if(value == subtree->value) return subtree;

  if(value < subtree->value)
  {
    if(subtree->left == NULL)
    {
      subtree->left = (binarySearchTreeNode*)malloc(sizeof(binarySearchTreeNode));
      subtree->left->value = value;
      subtree->left->left = NULL;
      subtree->left->right = NULL;
    }
    else
    {
      return Add(subtree->left, value);
    }
  }
  else
  {
    if(subtree->right == NULL)
    {
      subtree->right = (binarySearchTreeNode*)malloc(sizeof(binarySearchTreeNode));
      subtree->right->value = value;
      subtree->right->left = NULL;
      subtree->right->right = NULL;
    }
    else
    {
      return Add(subtree->right, value);
    }
  }
  return subtree;
}

int _print_t(binarySearchTreeNode *tree, int is_left, int offset, int depth, char s[20][255])
{
    char b[20];
    int width = 5;

    if (!tree) return 0;

    sprintf(b, "(%03d)", tree->value);

    int left  = _print_t(tree->left,  1, offset,                depth + 1, s);
    int right = _print_t(tree->right, 0, offset + left + width, depth + 1, s);
    for (int i = 0; i < width; i++)
            s[2 * depth][offset + left + i] = b[i];

        if (depth && is_left) {

            for (int i = 0; i < width + right; i++)
                s[2 * depth - 1][offset + left + width/2 + i] = '-';

            s[2 * depth - 1][offset + left + width/2] = '+';
            s[2 * depth - 1][offset + left + width + right + width/2] = '+';

        } else if (depth && !is_left) {

            for (int i = 0; i < left + width; i++)
                s[2 * depth - 1][offset - width/2 + i] = '-';

            s[2 * depth - 1][offset + left + width/2] = '+';
            s[2 * depth - 1][offset - width/2 - 1] = '+';
        }
        return left + width + right;
}

// Code taken from https://stackoverflow.com/questions/801740/c-how-to-draw-a-binary-tree-to-the-console
void print_t(binarySearchTreeNode *tree)
{
    char s[20][255];
    for (int i = 0; i < 20; i++)
        sprintf(s[i], "%80s", " ");

    _print_t(tree, 0, 0, 0, s);

    for (int i = 0; i < 20; i++)
        printf("%s\n", s[i]);
}

static void Print(binarySearchTreeNode* subtree)
{
  if(subtree == NULL) return;

  print_t(subtree);
}



static char* ToString(binarySearchTreeNode* root)
{
  return "Hello World";
}

binarySearchTreeAPIStruct const binarySearchTreeAPI =
{Add, Print, ToString};
