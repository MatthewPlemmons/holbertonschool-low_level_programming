#include "heap.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: pointer to parent node
 * @data: data to be stored in node
 * Return: pointer to created node, or NULL on failure
 */
binary_tree_node_t *binary_tree_node(binary_tree_node_t *parent, void *data)
{
	binary_tree_node_t *node;

	node = malloc(sizeof(binary_tree_node_t));
	if (!node)
		return (NULL);

	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
