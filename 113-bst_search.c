#include "binary_trees.h"

/**
 * bst_search - searches for a value in a BST
 * @tree: refers to the root node
 * @value: value data searched
 *
 * Return: pointer to the found node or NULL
 *         if it is NULL or not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
