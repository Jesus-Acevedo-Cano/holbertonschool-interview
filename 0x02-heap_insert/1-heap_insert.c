#include "binary_trees.h"

/**
 * heap_insert - function that creates a binary tree node.
 * @root: double pointer to the root node of the Heap
 * @value: value store in the node to be inserted
 * Return: pointer to the inserted node
 */

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new_node, *temp_node;

	new_node = binary_tree_node(*root, value);

	if (*root == NULL)
		*root = new_node;

	if ((*root)->n < new_node->n)
	{
		temp_node = *root;
		if ((*root)->left != NULL && (*root)->right == NULL)
			new_node->right = temp_node;
		else
			new_node->left = temp_node;
		temp_node->parent = new_node;
		new_node->parent = NULL;
		*root = new_node;
	}

	return (new_node);
}
