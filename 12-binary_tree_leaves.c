#include "binary_trees.h"

/**
 *binary_tree_leaves - Counts the leaves in a binary tree.
 *@tree: Pointer to the root node of the tree to count the number of leaves.
 *Return: 0 if tree is NULL, else return number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_total = 0;

	if (tree)
	{
		leaves_total += (!tree->left && !tree->right) ? 1 : 0;
		leaves_total += binary_tree_leaves(tree->left);
		leaves_total += binary_tree_leaves(tree->right);
	}
	return (leaves_total);
}
