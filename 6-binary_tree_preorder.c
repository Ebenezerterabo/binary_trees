#include "binary_trees.h"

/**
 * binary_tree_preorder - A function that goes through a binary tree using
 * pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* pre-order <root> <left> <right> */

	/* print the number */
	func(tree->n);

	/* recursively visit each node in the left subclass */
	binary_tree_preorder(tree->left, func);

	/* recursively visit each node in the right subclass */
	binary_tree_preorder(tree->right, func);


}
