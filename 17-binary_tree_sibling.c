#include "binary_trees.h"

/**
* binary_tree_sibling - a pointer to the function that finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: ointer to the sibling node else null
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
