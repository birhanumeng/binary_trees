#include "binary_trees.h"

/**
 * binary_tree_preorder - visiting using pre-order traversal
 * @tree: refers to the root node
 * @func: function for each node after visited
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
