#include "binary_trees.h"

/**
 * binary_tree_uncle - that finds the Uncle of a node
 *
 * @node: Pointer to the node to measure the depth from
 * Return: finds the Uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node)
		return (NULL);

	if (!(node->parent && node->parent->parent))
		return (NULL);

	uncle = node->parent->parent->left;
	if (uncle == node->parent)
		uncle = node->parent->parent->right;
	return (uncle);
}
