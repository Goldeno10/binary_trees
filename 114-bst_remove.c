#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of element in the array
 * Return: Pointer to the root node of the created BST, or NULL on failure
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node, *h, *left, *right;

	if (!root || !value)
		return (NULL);
	h = root;
	node = bst_search(root, value);
	if (!node)
		return (NULL);
	left = node->left ? node->left : NULL;
	right = node->right ? node->right : NULL;
	if (right && left)
	{
		left-parent = (!right-left || !right->left) ?
			(node->parent && ) :
		       right-left;	

	return (tree);
}
