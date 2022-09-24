#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root
 * @node: pointer to the node
 * Return: 1 on root else 0
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
if (!node || node->parent)
return (0);
return (1);
}
