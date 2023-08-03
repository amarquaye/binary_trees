#include "binary_trees.h"


// By Jesse Amarquaye


/**
 * binary_tree_delete - This deletes an entire binary tree
 *
 * @tree: tree root
 * Return: no return
 */


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

