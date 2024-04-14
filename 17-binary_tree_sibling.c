#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: NULL if it has no parent or the value at the node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* if node is the left child of its parent, return the right child sibling*/
	/* else return the left child sibling */
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
