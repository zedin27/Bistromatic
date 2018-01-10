#include "stdlib.h"
#include "bistro.h"


//TODO: Add this to libft if you want :D
t_btree *create_node(int *value) //check if is necessary to malloc
{
	t_btree *root;

	root = malloc(sizeof(t_btree)); //ft_memalloc(sizeof(t_btree)) needs to be used
	root->data = value;
	root->left = NULL;
	root->right = NULL;
	return (root);
}

t_btree *insert_left(t_btree *node, int *value)
{
	node->left = create_node(value);
	return (node->left);
}

t_btree *insert_right(t_btree *node, int *value)
{
	node->right = create_node(value);
	return (node->right);
}