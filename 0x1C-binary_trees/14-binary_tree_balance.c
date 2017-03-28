#include "binary_trees.h"

/**
 * b_tree_height - Calculate height of binary tree.
 * @tree: Input tree.
 * Return: Height of tree.
 */
int b_tree_height(const binary_tree_t *tree)
{
	int hleft, hright, height;

	if (!tree)
		return (0);
	hleft = tree->left ? b_tree_height(tree->left) + 1 : 0;
	hright = tree->right ? b_tree_height(tree->right) + 1 : 0;
	height = hleft > hright ? hleft : hright;
	return (height);
}

/**
 * binary_tree_balance - Measure balance factor of binary tree.
 * @tree: Input tree.
 * Return: int balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft, hright;

	if (!tree)
		return (0);
	hleft = tree->left ? b_tree_height(tree->left) + 1 : 0;
	hright = tree->right ? b_tree_height(tree->right) + 1 : 0;
	return (hleft - hright);
}
