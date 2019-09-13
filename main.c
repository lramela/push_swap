#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int		main(int argc, char **argv)
{
	int			i;
	t_list		*head;
	t_list		*node1;
	t_list		*node2;
	t_list 		*node3;

	head = new_node(1);
	node1 = new_node(2);
	node2 = new_node(3);
	node3 = new_node(4);

	add_node(&head, node1);
	add_node(&head, node2);
	add_node(&head, node3);
	print_list(head);
	return (0);
}

