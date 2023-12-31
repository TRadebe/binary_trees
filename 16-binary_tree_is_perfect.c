#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * 
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	depth = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	return (nodes = (1 << (depth + 1)) - 1);
}
