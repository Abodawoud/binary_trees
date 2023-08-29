#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the node to measure the depth from
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

	return (1 + left_height + right_height);
}
