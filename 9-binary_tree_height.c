#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: 0 if function is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rh = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (lh > rh ? lh : rh);
}
