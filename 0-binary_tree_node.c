#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: The value to put in the node
 *
 * Return: The created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
