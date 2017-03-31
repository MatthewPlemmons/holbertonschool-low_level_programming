#include "binary_trees.h"
#include "15-binary_tree_is_full.c"

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

/**
 * binary_tree_is_perfect - Checks for perfect tree
 * @tree: Input tree
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
