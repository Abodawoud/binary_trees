#include "binary_trees.h"
void binary_tree_recurisve_full(const binary_tree_t *tree, int *flag);
/**
 * binary_tree_is_full - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: balance
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 1;

	if (!tree)
		return (0);
	binary_tree_recurisve_full(tree, &flag);
	return (flag);
}
/**
 * binary_tree_recurisve_full - Recursion
 *  on a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @flag: Pointer to flag
 * Return: None
 */
void binary_tree_recurisve_full(const binary_tree_t *tree, int *flag)
{
	if (!tree)
		return;
	if (!((tree->left && tree->right) || (!tree->left && !tree->right)))
		(*flag) = 0;
	binary_tree_recurisve_full(tree->left, flag);
	binary_tree_recurisve_full(tree->right, flag);
}
