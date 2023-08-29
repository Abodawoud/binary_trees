#include "binary_trees.h"

/**
 * binary_tree_sibling - that finds the sibling of a node
 *
 * @node: Pointer to the node to measure the depth from
 * Return: finds the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
