#include "binary_trees.h"

/**
 * binary_tree_height - The driver function. Measures the height of
 * the binary tree at a particular node
 * @tree: The node to be measured
 * Return: 0 if tree is NULL, otherwise the distance between node
 * and "ground level"
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t count = 0;

  if (tree == NULL)
    return (0);

  if (tree->left != NULL)
    count = 1 + binary_tree_height(tree->left);
  if (tree->right != NULL)
    count = 1 + binary_tree_height(tree->right);

  return (count);
}
