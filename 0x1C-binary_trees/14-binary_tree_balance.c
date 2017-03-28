#include "binary_trees.h"

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
	hleft = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	hright = tree->right ? binary_tree_balance(tree->right) + 1 : 0;
	return (hleft - hright);
}
