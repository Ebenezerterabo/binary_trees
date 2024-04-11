#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts at the left-child of
 * another node.
 * @parent: Pointer to the node to insert the left-child
 * @value: Value to be stored in the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->left != NULL)
	{
		/* updating the child parent to the newnode */
		parent->left->parent = newNode;
		/* update the child of the newnode to the current parent child */
		newNode->left = parent->left;
	}

	parent->left = newNode; /* make the left child of the parent the newnode */

	return (newNode);
}
