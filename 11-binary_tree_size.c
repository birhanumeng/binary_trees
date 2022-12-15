#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: refers to the root node
 *
 * Return: size of tree or, 0 it it is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree != NULL)
	{
		n += binary_tree_size(tree->left);
		n += binary_tree_size(tree->right);
		n += 1;
	}
	return (n);
}
