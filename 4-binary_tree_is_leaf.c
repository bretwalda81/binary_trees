#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that determines if node is a leaf
 * In other words, determine if the passed in node has no children
 * @node: The node to be checked
 * Return: 1 if node is a leaf, 0 if node is invalid or is not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
  if (node == NULL || node->left != NULL || node->right != NULL)
    return (0);
  else
    return (1);
}
