#include "binary_trees.h"

/**
 * binary_tree_postorder - print the tree in postorder
 * @tree: pointer to the root node
 * @func: function pointer to print the value
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
