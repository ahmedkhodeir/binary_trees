#include "binary_trees.h"

/**
 * binary_tree_node - function that creates.
 *@parent: is a pointer to the parent node.
 *@value: is the value to put in the new node.
 * Return:Your function must return a pointer.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
