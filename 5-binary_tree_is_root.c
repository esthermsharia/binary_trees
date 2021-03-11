#include "binary_trees.h"

/**
 *binary_tree_is_root - Checks if a given node is a root.
 *@node:Pointer to the node to check.
 *Return: If node is root return 1, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
