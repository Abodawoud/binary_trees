#include "binary_trees.h"
int binary_tree_height_perfect(const binary_tree_t *tree);
int max_height_perfect(size_t a, size_t b);
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to traverse
 * Return: balance
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (1);
	left_height = (int)binary_tree_height_perfect(tree->left);
	right_height = (int)binary_tree_height_perfect(tree->right);

	if (left_height != right_height)
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
/**
 * binary_tree_height_perfect - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */
int binary_tree_height_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	int left_height = binary_tree_height_perfect(tree->left);
	int right_height = binary_tree_height_perfect(tree->right);

	return (1 + max_height_perfect(left_height, right_height));
}
/**
 * max - max
 *
 * @a: a
 * @b: b
 * Return: a or b
 */
int max_height_perfect(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
