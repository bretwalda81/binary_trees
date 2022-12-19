#include "binary_trees.h"

/**
 * binary_tree_depth - Function that determines the depth of a
 * binary tree. In other words, how far away from the root is the node?
 * @tree: The current node to be checked
 * Return: 0 if tree is NULL, otherwise the distance between node
 * and root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  int count = 0;

  if (tree == NULL)
    return (0);

  while (tree->parent != NULL)
    {
      count++;
      tree = tree->parent;
    }

  return (count);
}
