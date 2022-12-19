#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts all the nodes with
 * at least 1 child node. In other words, nodes with left or
 * right pointers not pointing to NULL
 * @tree: The current node in the binary tree
 * Return: 0 if tree is NULL, otherwise the number of nodes with
 * child nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  else if (tree->left != NULL || tree->right != NULL)
    return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
  else
    return (0);
}
