#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

t_list *new_node(int data)
{
	t_list *node;

	node = (struct s_list *)malloc(sizeof(t_list));

	node->data = data;
	node->next = NULL;
	return (node);
}

void 	print_list(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
		lst->next = lst->prev;
	}
}

void	add_node(t_list **alst, t_list *node)
{
	t_list *temp;

	temp = *alst;
	if (node == NULL)
		return ;
	if (*alst == NULL)
		temp = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		te
