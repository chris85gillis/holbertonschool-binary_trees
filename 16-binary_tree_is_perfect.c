#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * 
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, leaves;

	if (tree == NULL)
		return (0);
	
	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);

	return ((size_t)(1 << height) - 1) == leaves;
}
