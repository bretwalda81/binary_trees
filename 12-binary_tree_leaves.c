#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the number of
 * leaves in a binary tree. In other words, nodes that point
 * to NULL in both left and right
 * @tree: The current node of tthe binary tree
 * Return: 0 if tree is NULL, otherwise the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  else if (tree->left == NULL && tree->right == NULL)
    return (1);
  else
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
