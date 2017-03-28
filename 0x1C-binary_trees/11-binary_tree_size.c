#include "binary_trees.h"

/**
 * binary_tree_size - Get size of binary tree.
 * @tree: Tree to measure
 * Return: size_t, height of tree, or 0 otherwise.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = 0;
	size = binary_tree_size(tree->left) + 1;
	size += binary_tree_size(tree->right);
	return (size);
}
