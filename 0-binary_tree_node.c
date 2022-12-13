#include "binary_trees.h"

/**
 * binary_tree_node - it create binary trees.
 * @parent: refers to parent node.
 * @value: data the node contain.
 * Retrun: the new node otherwise, NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));

        if(new == NULL)
        {
                return (NULL);
        }

        new->n = value;
        new->parent = parent;
        new->left = NULL;
        new->right = NULL;

        return (new);
}
