#include "binary_trees.h"

/**
 * tree_height - calculate the size of the tree
 * @tree: pointer to the node
 * @counter: pointer to the counter
 **/
void tree_height(const binary_tree_t *tree, size_t *counter)
{
if (tree)
{
(*counter)++;
tree_height(tree->left, counter);
tree_height(tree->right, counter);
}
}

/**
 * binary_tree_size - calculate the size of the tree
 * @tree: pointer to the root node
 *
 * REturn: the size
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t siz = 0;
if (tree)
tree_height(tree, &siz);

return (siz);
}
