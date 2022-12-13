#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node to left a node.
 * @parent: refers to parent node.
 * @value: data the node contain.
 * Return: the new node or, NULL on failure
 *         if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	
	new = malloc(sizeof(binary_tree_t));
	if(new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new-right = NULL;
	if(parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
		return (new);
	}
	new->left = parent->left;
	parent->left = new;
	return (new);
}
