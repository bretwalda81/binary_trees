#include "binary_trees.h"

/**
 * depth_finder - Helper function. Calculates the
 * depth of the leftmost side of the tree
 * This will be the basis for determining if the binary
 * tree is a perfect binary tree
 * @tree: The root of the passed in tree
 * Return: The depth count
 */
int depth_finder(const binary_tree_t *tree)
{
  int count = 0;

  while (tree != NULL)
    {
      count++;
      tree = tree->left;
    }
  return (count);
}

/**
 * perfect_recursion - The workhorse function. Using recursion,
 * determine if the node has children and determine if the number of
 * recursive calls match the calculated depth
 * @tree: The current node of the binary tree
 * @depth: The calculated depth from depth_finder
 * @count: Value that keeps track of recursive calls
 * Return: 1 if depth and count agree and did not find any node with
 * 1 child. Otherwise, 0
 */
int perfect_recursion(const binary_tree_t *tree, int depth, int count)
{
  if (tree->left == NULL && tree->right == NULL)
    {
      if (depth == count + 1)
	return (1);
      else
	return (0);
    }

  if (tree->left == NULL || tree->right == NULL)
    return (0);

  return (perfect_recursion(tree->left, depth, count + 1) &&
	  (perfect_recursion(tree->right, depth, count + 1)));
}

/**
 * binary_tree_is_perfect - Driver function. Determine if
 * binary tree is perfect. In other words, determine if
 * binary tree has nodes with 0 or 2 children, and if
 * left and right subtrees are of equal depth
 * @tree: The root of the binary tree
 * Return: 0 if tree is NULL, if unequal depth, or nodes with
 * 1 children. Otherwise, return 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
  int depth = 0, count = 0;

  if (tree == NULL)
    return (0);

  depth = depth_finder(tree);
  return (perfect_recursion(tree, depth, count));
}
