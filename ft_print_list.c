#include "libft.h"
#include<stdio.h>

void print_list(t_list *beta)
{
	int *c;
	while (beta)
	{
		c = beta->content;
		//c = ((char *)beta->data);
		printf("[%c]--->", *c);
		beta = beta->next;
	}
	printf("NULL");
	printf("\n");
}