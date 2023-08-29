#include "binary_trees.h"
void binary_tree_recurisve_nodes(const binary_tree_t *tree, size_t *count);
/**
 * binary_tree_nodes - Counts the nodes in a binary tree
 *
 * @tree: Pointer to the node to measure the depth from
 * Return: Count the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree)
		return (0);
	binary_tree_recurisve_nodes(tree, &node_count);
	return (node_count);
}

/**
 * binary_tree_is_node - Checks if a node is a has at least one child
 *
 * @node: Pointer to the node to check
 * Return: 1 if node is a node, otherwise 0
 */

int binary_tree_is_node(const binary_tree_t *node)
{

	if (node->left || node->right)
		return (1);

	return (0);
}
/**
 * binary_tree_recurisve_nodes - Performs an inorder traversal
 *  on a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @count: Pointer to the accumulator for node count
 * Return: nodes number
 */
void binary_tree_recurisve_nodes(const binary_tree_t *tree, size_t *count)
{
	if (!tree)
		return;

	if (binary_tree_is_node(tree))
		(*count)++;

	binary_tree_recurisve_nodes(tree->left, count);
	binary_tree_recurisve_nodes(tree->right, count);
}
