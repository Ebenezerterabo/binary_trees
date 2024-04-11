#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* base case */
	if (tree == NULL)
		return;

	/* free all left subtrees  recursively */
	binary_tree_delete(tree->left);

	/* free all right subtrees recursively */
	binary_tree_delete(tree->right);

	free(tree);
}
