#include "binary_trees.h"

/**
 * binary_h - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_h(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_h(tree->left);
	right_height = binary_h(tree->right);

	return (1 + max(left_height, right_height));
}
/**
 * max - max
 *
 * @a: a
 * @b: b
 * Return: a or b
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	height = binary_h(tree);
	return (height - 1);
}
