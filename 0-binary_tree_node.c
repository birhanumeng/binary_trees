#include "binary_trees.h"

/*
 * binary_tree_node - it create binary trees.
 * @parent: parent node.
 * @value: data the contain.
 * Retrun: returns the newly created node NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *root = malloc(sizeof(binary_tree_t));
        binary_tree_t *new = malloc(sizeof(binary_tree_t));

        if(new == NULL || root == NULL)
        {
                return (NULL);
        }

        new->n = value;
        new->parent = parent;
        new->left = NULL;
        new->right = NULL;

        if(parent == NULL)
        {
                root = new;
        }

        return (new);
}
