#include "binary_trees.h"

/**
 * binary_trees *binary_tree_node - Crates a binary tree node
 * @parent:poiter to the parent node of the node to create
 * @value: The value to put the new node
 *
 * Return: Pointer to the new node, else NULL on faluire
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = mallloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
