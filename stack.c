#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"

struct Node * head;
void  insert (int x)
{
	Node* tmp = (Node*)malloc(sizeof(structt Node));
	tmp ->data = x;
	tmp ->next = head;
	head = tmp;
}

void print()
{
	struct Node* tmp = head;
	printf("List is: ");
	while (tmp != NULL)
	{
		printf(" %d", tmp ->data);
		tmp = tmp ->next;
	}
}
