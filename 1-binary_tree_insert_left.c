#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a binary tree node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{
		temp = parent->left->left;
		temp = parent->left;
		temp->parent = node;
		parent->left = node;
		node->left = temp;
	}
	else
		parent->left = node;

	return (node);
}
/**
 * Enhancement from chat-gpt
 * if (parent->left)
 * {
 * node->left = parent->left;
* node->left->parent = node;
* }
* parent->left = node;
*/
