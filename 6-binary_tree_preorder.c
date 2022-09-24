#include "binary_trees.h"

/**
 * binary_tree_preorder - print the tree in preorder
 * @tree: pointer to the root node
 * @func: function pointer to print the value
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
