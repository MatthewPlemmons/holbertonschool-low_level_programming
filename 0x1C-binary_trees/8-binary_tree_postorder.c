#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal through binary tree.
 * @tree: Tree to traverse
 * @func: Pointer to function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
