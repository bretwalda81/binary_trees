#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that determines if a binary tree
 * is full. In other words, if all nodes under the passed in node
 * have subnodes with either 0 or 2 children
 * @tree: The passed in node in the binary tree
 * Return: 0 if tree is NULL or a node with 1 child is found, otherwise
 * 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
  int left_count = 0, right_count = 0;

  if (tree == NULL)
    return (0);

  if (tree->left != NULL && tree->right == NULL)
    return (0);
  else if (tree->left == NULL && tree->right != NULL)
    return (0);
  else if (tree->left == NULL && tree->right == NULL)
    return (1);

  left_count = binary_tree_is_full(tree->left);
  right_count = binary_tree_is_full(tree->right);
  if (left_count == 1 && right_count == 1)
    return (1);
  else
    return (0);
}
