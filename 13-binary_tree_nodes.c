
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes that not leave
 * @tree: refers to the root node
 *
 * Return: number of node or, 0 if it is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree != NULL)
	{
		num_nodes += (tree->left || tree->right) ? 1 : 0;
		num_nodes += binary_tree_nodes(tree->left);
		num_nodes += binary_tree_nodes(tree->right);
	}
	return (num_nodes);
}
