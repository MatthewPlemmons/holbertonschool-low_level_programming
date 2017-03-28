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
	hleft = hright = 0;
	if (tree->left)
		hleft = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		hright = binary_tree_balance(tree->right) + 1;
       	return (hleft - hright);
}
