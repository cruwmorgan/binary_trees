#include "binary_trees.h"

/**
* sibling - pointer to the function that gets the sibling node to find uncle
* @node: pointer to the node to find its siblings
* Return: sibling of node else Null
*/

binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
* binary_tree_uncle - a pointer to the function that finds the uncle of a node
* @node: pointer to the node to find the uncle
* Return: pointer to the uncle node else null
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (sibling(node->parent));
}
