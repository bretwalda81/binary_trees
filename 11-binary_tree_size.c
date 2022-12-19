#include "binary_trees.h"

/**
 * binary_tree_size - Function that calculates the size of the binary
 * tree. In other words, counts the number of nodes in the tree
 * @tree: The current node
 * Return: 0 if tree is empty, otherwise the number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);

  return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
