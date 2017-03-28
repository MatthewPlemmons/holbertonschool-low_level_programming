#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least one child in binary tree.
 * @tree: Input tree
 * Return: size_t number of nodes with child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	nodes = 0;
	nodes += binary_tree_nodes(tree->left) + 1;
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
