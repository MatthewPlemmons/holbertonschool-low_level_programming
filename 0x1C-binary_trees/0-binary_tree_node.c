#include "binary_trees.h"


/**
 * binary_tree_node - Create binary tree node
 * @parent: Parent of created node
 * @value: Integer to store in node
 * Return: New node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = new->right = NULL;
	return (new);
}
