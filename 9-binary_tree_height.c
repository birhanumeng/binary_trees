#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: refers to the root node
 *
 * Return: hieght of the binary tree or, 0 in it is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
