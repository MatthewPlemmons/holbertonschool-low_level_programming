#include "binary_trees.h"

/**
 * binary_tree_leaves - Get leaves of binary tree.
 * @tree: Tree to measure
 * Return: size_t number of leaves in tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaves = 0;
	if (tree->left)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
