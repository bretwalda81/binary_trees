#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle
 * of the given node
 * @node: The given node whose uncle is to be searched for
 * Return: NULL if node, its parent, or its grandparent is null.
 * Otherwise, the pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *temp = NULL;

if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

temp = node;
temp = temp->parent;

if (temp->parent->left == temp)
return (temp->parent->right);
else
return (temp->parent->left);
}
