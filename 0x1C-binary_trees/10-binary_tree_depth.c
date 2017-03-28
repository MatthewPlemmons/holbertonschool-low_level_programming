#include "binary_trees.h"

/**
 * binary_tree_depth - Get depth of a node in binary tree.
 * @node: Node to measure
 * Return: size_t depth of node, or 0 otherwise.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (!node)
		return (0);
	depth = 0;
	if (node->parent)
		depth = binary_tree_depth(node->parent) + 1;
	return (depth);
}
