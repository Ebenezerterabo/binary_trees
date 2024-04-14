#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect
 *         0 if the tree is not perfect
 *         0 if the tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ht, nodes, pow;

	if (tree == NULL)
		return (0);

	/* check if the current node has no child */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* find the height, nodes and power */
	ht = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	pow = _power(2, ht + 1);

	return (pow - 1 == nodes);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: 0 if function is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rh = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (lh > rh ? lh : rh);
}

/**
 * binary_tree_size - A function that measures the size of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * _power - A function that calculate the power of a number
 * @num1: first number
 * @num2: second number
 *
 * Return: the power of the number
 */

int _power(int num1, int num2)
{
	if (num2 < 0)
		return (-1);
	else if (num2 == 0)
		return (1);
	else
		return (num1 * _power(num1, num2 - 1));
}
