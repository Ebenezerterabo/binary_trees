#include "binary_trees.h"

/**
 * bianry_tree_uncle - A function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: NULL if node is NULL, no uncle return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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
