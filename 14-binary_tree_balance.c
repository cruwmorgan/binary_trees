#include "binary_trees.h"

/**
* binary_tree_balance - function that measures the balance factor of a binary
* tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor of a binary tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_h(tree->left);
	right_height = binary_tree_h(tree->right);
	return (left_height - right_height);
}

/**
* binary_tree_h - function that gets the height of a binary tree
* @tree: pointer to the root node of the tree to calculate height
* Return: height of a tree or zero
*/

size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	left_size += 1 + binary_tree_h(tree->left);
	right_size += 1 + binary_tree_h(tree->right);
	if (left_size > right_size)
		return (left_size);

	return (right_size);
}
