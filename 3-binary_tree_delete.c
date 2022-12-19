#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes the entire binary tree
 * @tree: The binary tree to be purged
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
}
