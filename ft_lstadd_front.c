#include"libft.h"
void ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst)
	{
		new->next = *alst;
	}
	else
		new->next = NULL;
	*alst = new;
}