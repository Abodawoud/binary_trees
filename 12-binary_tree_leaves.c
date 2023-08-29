#include "binary_trees.h"
size_t binary_tree_recurisve_leaves(const binary_tree_t *tree);
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the node to measure the depth from
 * Return: Count the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_recurisve_leaves(tree));
}

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if ((!node->left) && (!node->right))
		return (1);

	return (0);
}
/**
 * binary_tree_recurisve_leaves - Performs an inorder traversal
 *  on a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Leaves number
 */
size_t binary_tree_recurisve_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left_leaves = binary_tree_recurisve_leaves(tree->left);
	right_leaves = binary_tree_recurisve_leaves(tree->right);
	return (left_leaves + right_leaves);
}
