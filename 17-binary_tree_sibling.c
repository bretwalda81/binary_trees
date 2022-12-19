#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling
 * of the given node
 * @node: The given node whose sibling is to be searched for
 * Return: NULL if node is null or its parent is null. Otherwise
 * the pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
  binary_tree_t *temp = NULL;

  if (node == NULL || node->parent == NULL)
    return (NULL);

  temp = node->parent;

  if (temp->left == node)
    return (temp->right);
  else
    return (temp->left);
}
