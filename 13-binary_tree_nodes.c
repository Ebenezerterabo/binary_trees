#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes with atleast 1 child
 * in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of node with 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count, atleast_one_child;

	if (tree == NULL)
		return (0);

	/* check if the current node has atleast one child */
	atleast_one_child = (tree->left != NULL || tree->right != NULL);

	count = atleast_one_child ? 1 : 0;

	return (count + (binary_tree_nodes(tree->left))
		+ (binary_tree_nodes(tree->right)));
}
