#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that determines if node is a root
 * In other words, determine if the passed in node has no parent
 * @node: The node to be checked
 * Return: 1 if node is a root, 0 if node is invalid or is not a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
  if (node == NULL || node->parent != NULL)
    return (0);
  else
    return (1);
}
