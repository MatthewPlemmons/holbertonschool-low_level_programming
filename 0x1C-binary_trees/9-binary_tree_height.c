#include "binary_trees.h"

/**
 * binary_tree_height - Get height of binary tree.
 * @tree: Tree to measure
 * Return: size_t, height of tree, or 0 otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (!tree)
		return (0);
	h_left = h_right = 0;
	if (tree->left)
	{
		binary_tree_height(tree->left);
		++h_left;
	}
	h_right = h_left;
	if (tree->right)
	{
		binary_tree_height(tree->right);
		++h_right;
	}
	if (h_left > h_right)
		return (h_left);
	return (h_right);
}
