#include "binary_trees.h"

/**
 *binary_tree_nodes - Counts the nodes with at least 1 child.
 *@tree: Pointer to the root node of the tree to count the number of nodes.
 *Return: number of nodes with atleat 1 child, 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
