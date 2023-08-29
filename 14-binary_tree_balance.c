#include "binary_trees.h"
int binary_tree_balance(const binary_tree_t *tree);
int binary_h_num(const binary_tree_t *tree);
int binary_tree_height_num(const binary_tree_t *tree);
int max_num(int a, int b);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height_num(tree->left);
	right_height = binary_tree_height_num(tree->right);
	if (tree->n == 98)
	{
		printf("%d\n", left_height);
		printf("%d\n", right_height);
	}
	return (left_height - right_height);
}
/**
 * binary_h_num - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height
 */
int binary_h_num(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_h_num(tree->left);
	right_height = binary_h_num(tree->right);

	return (1 + max_num(left_height, right_height));
}
/**
 * max_num - max
 *
 * @a: a
 * @b: b
 * Return: a or b
 */
int max_num(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
/**
 * binary_tree_height_num - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height
 */
int binary_tree_height_num(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	height = binary_h_num(tree);
	return (height);
}
