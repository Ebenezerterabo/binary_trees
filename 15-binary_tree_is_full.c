#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: NULL if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* check if the current node has no child */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if the current node has two children */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* check for current node with one child */
	return (0);
}
