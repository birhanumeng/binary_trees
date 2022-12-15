#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 * @tree: refers to the root node
 *
 * Return: depth of a tree or, 0 it is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
