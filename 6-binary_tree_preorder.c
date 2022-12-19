#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that traverses and prints
 * the binary tree values using preorder method
 * @tree: The current node
 * @func: The passed in function
 * Return: Nothing
 * Description: For this particular task, we needed to print out
 * the value at the node. The function print_num given to us would
 * have sufficed, but is actually incorrect because we are not supposed
 * to use print_num. The function pointer is used so that we could
 * use this same code for other applications, such as duplicating the
 * node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree == NULL || func == NULL)
    return;

  func(tree->n);
  binary_tree_preorder(tree->left, func);
  binary_tree_preorder(tree->right, func);
}
