#include "binary_trees.h"
/**
 *
 *
 *
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;
	
	if (!tree)
		return;
	while (tree && tree->parent)
		tree = tree->parent;
	temp = tree;
	free(temp);
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	return
}
