#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree.
 * Return: If tree is not full return 0, else 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    binary_tree_is_full(tree->left) == 0 ||
		    binary_tree_is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
