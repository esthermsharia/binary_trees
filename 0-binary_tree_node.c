#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_node - Creates a binary tree node.
 *@parent: Pointer to the parent node of the node to create.
 *@value: Value to put in the new node.
 *Return: Pointer to the new node, NULL on error.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);

	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;

	return (temp);
}
