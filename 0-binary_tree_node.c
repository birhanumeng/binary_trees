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
        binary_tree_t *tmp_tree = malloc(sizeof(binary_tree_t));

        if(tmp_tree == NULL || root == NULL)
        {
                return (NULL);
        }

        tmp_tree->n = value;
        tmp_tree->parent = parent;
        tmp_tree->left = NULL;
        tmp_tree->right = NULL;

        if(parent == NULL)
        {
                root = tmp_tree;
        }

        return (tmp_tree);
}
