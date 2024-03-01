#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of a  tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, p = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		p = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > p) ? l : p);
	}
	return (0);
}
