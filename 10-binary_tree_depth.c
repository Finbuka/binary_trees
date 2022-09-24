#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of the tree
 * @tree: pointer to the root node
 *
 * REturn: the depth
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree->parent)
depth = 1 + binary_tree_depth(tree->parent);

return (depth);
}
