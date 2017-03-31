#include "binary_trees.h"

/**
 * binary_tree_uncle - Find sibing of parent node.
 * @node: Input node.
 * Return: Pointer to uncle node, else NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p, *gp;

	if (!node || !node->parent)
		return (NULL);
	p = node->parent;
	if (!p->parent)
		return (NULL);
	gp = p->parent;
	if (!gp->left || !gp->right)
		return (NULL);
	if (gp->left == p)
		return (gp->right);
	return (gp->left);
}
