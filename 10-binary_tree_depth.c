#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree node
 *
 * @tree: Pointer to the node to measure the depth from
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	const binary_tree_t *current;

	if (tree == NULL)
		return (0);

	depth = 0;
	current = tree;

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
