#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal through binary tree.
 * @tree: Tree to traverse
 * @func: Pointer to function
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
