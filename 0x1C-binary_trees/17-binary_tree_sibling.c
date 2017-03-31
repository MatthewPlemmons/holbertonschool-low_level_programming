#include "binary_trees.h"

/**
 * binary_tree_sibling - Find sibling of node.
 * @node: Node to find sibling of.
 * Return: Pointer to sibling node, else NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p;

	if (!node || !node->parent)
		return (NULL);
	p = node->parent;
	if (!p->left || !p->right)
		return (NULL);
	if (p->left == node)
		return (p->right);
	return (p->left);
}
