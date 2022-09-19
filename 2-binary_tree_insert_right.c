#include "binary_trees.h"

/**
*binary_tree_insert_right - Inserts a new node at the right side of root
*
*@parent: The pointer to the node where child will be inserted
*@value: The data stored in the new node
*Return: A pointer to the new node or NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent || !value)
		return(NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return(NULL);
	new_node->left = NULL;
	new_node->n = value;
	new_node->parent = parent;
	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	return(new_node);
}
