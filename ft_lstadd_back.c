#include"libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *li;
	li = *alst;
	if (!li)
	{
		*alst = new;
		return(*alst);
	}
	else
	{
		while (li->next != NULL)
		{
			li = li->next;
		}
		li->next = new;
	}
}