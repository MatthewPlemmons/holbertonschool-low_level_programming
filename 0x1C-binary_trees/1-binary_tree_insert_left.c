#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as the left-child of another node
 * @parent: Parent of new node
 * @value: Value for new node to hold
 * Return: Pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	temp = parent->left;
	parent->left = new;
	new->left = temp;
	if (temp)
		temp->parent = new;
	return (new);
}
