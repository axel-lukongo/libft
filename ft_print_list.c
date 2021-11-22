#include "libft.h"
#include<stdio.h>

void print_list(t_list *beta)
{
	int *c;
	while (beta)
	{
		c = beta->content;
		//c = ((char *)beta->data);
		printf("[%d]--->", *c);
		beta = beta->next;
	}
	printf("NULL");
	printf("\n");
}