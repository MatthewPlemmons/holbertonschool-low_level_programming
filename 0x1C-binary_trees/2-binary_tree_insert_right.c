#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as the right-child of another node
 * @parent: Parent of new node
 * @value: Value for new node to hold
 * Return: Pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	temp = parent->right;
	parent->right = new;
	new->right = temp;
	if (temp)
		temp->parent = new;
	return (new);
}
