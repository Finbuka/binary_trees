#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right
 * @parent: pointer to the parent node of the node to insert
 * @value: value to put in the new node
 *
 * Return: Pointer to the newly created node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;

new_node = malloc(sizeof(binary_tree_t));
if (!new_node || !parent)
return (NULL);

new_node->parent = parent;
new_node->n = value;
new_node->right = NULL;
new_node->right = NULL;

if (parent->right)
{
parent->right->parent = new_node;
new_node->right = parent->right;
}

parent->right = new_node;
return (new_node);
}
