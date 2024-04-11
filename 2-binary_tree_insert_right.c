#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the right-child
 * of another node
 * @parent: Pointer to the node to insert the right child
 * @value: Value to store in the new node
 *
 * Return: the newnode created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
	}

	parent->right = newNode;

	return (newNode);
}
