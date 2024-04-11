#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 on success, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* current node found is root */
	if (!node->parent)
		return (1);
	else
		return (0);
}
