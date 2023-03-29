#include "binary_trees.h"

/**
* binary_tree_node - pointer to the function that creates a binary tree node
* @parent: pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return: eturn a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/*@if checks for null value*/
	if (value == '\0')
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	/*@if checks for null*/
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
