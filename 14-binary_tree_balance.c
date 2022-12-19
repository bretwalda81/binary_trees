#include "binary_trees.h"

/**
 * binary_tree_height2 - Helper function. Measures the height of
 * the binary tree at a particular node
 * This is actually the same as 9-binary_tree_height.c
 * @tree: The node to be measured
 * Return: 0 if tree is NULL, otherwise the distance between node
 * and "ground level"
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);

  if (tree->left != NULL)
    return (1 + binary_tree_height2(tree->left));
  else
    return (1 + binary_tree_height2(tree->right));
}

/**
 * binary_tree_balance - Function that determines the balance
 * factor of a binary tree. In other words, checks the height
 * of the left and right subtree from the node and return the
 * difference
 * @tree: The node whose balance factor is to be checked
 * Return: 0 if tree is NULL, otherwise the difference in
 * height of the left and right subtree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
  size_t left_count = 0, right_count = 0;

  if (tree == NULL)
    return (0);

  left_count = binary_tree_height2(tree->left);
  right_count = binary_tree_height2(tree->right);

  return (left_count - right_count);
}
