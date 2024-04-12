#include "binary_trees.h"

/**
 * binary_tree_postorder - A function that goes through a binary tree using
 * post-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* <left> <right> <root> */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
