#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node to the right side
 * of the binary tree
 * @parent: The parent of the node to be created
 * @value: The value to be put into this newly created node
 * Return: The newl created node if success, or NULL if failure or NULL parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node = NULL, *new_node2 = NULL;

  if (parent == NULL)
    return (NULL);

  new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
    return (NULL);

  if (parent->right == NULL)
    {
      new_node->n = value;
      new_node->parent = parent;
      new_node->left = NULL;
      new_node->right = NULL;
      parent->right = new_node;
    }
  else
    {
      new_node2 = parent->right;
      new_node->n = value;
      new_node->parent = parent;
      new_node->right = new_node2;
      new_node2->parent = new_node;
      new_node->left = NULL;
      parent->right = new_node;
    }

  return (new_node);
}
