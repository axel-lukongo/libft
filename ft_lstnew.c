#include"libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *ptr;
	int *c = content;
	if (!(ptr = malloc(sizeof(t_list))))
		return(0);
	ptr->next = 0;
	ptr->content = content;
	print_list(ptr);
	return(ptr);
}