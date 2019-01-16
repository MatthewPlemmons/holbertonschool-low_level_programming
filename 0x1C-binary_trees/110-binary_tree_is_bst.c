#include "binary_trees.h"

/**
 * binary_tree_is_bst - Wrapper function for `is_bst()`.
 * @tree: tree to check
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	const binary_tree_t *prev;

	prev = NULL;
	return (is_bst(tree, prev));
}

/**
 * is_bst - Checks if binary tree is valid binary search tree.
 * @tree: tree to check
 * @prev: previous node to check against
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int is_bst(const binary_tree_t *tree, const binary_tree_t *prev)
{
	if (tree)
	{
		if (!is_bst(tree->left, prev))
			return (0);
		if (prev != NULL && tree->n <= prev->n)
			return (0);
		prev = tree;
		return (is_bst(tree->right, prev));
	}
	return (1);
}
