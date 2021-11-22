#include"libft.h"

/*t_list *ft_lstmap(t_list *lst, void *(*f)(void *))//,void (*del)(void *))
{
	t_list *new_lst;
	t_list *start;
	if (!(new_lst = ft_lstnew((f)(lst->content))))
		{
			//(del)(new_lst->content);
			return(0);
		}
	start = new_lst;
	while (lst)
	{
		lst = lst->next;
		if (!(new_lst->next = ft_lstnew((f)(lst->content))))
		{
			//(del)(new_lst->content);
			return(0);
		}
		new_lst = new_lst->next;
	}
	return(start);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))//, void (*del)(void *))
{
	t_list	*begin;
	t_list	*tmp;
	int *c;
	void *d = (*f)(lst->content);
	c = (int *)d;
	if (!lst)
		return (0);
	if (!(tmp = ft_lstnew(c)))
		return (0);
	begin = tmp;
	while (lst->next)
	{
		c = tmp->content;
		lst = lst->next;
		if (!(tmp->next = ft_lstnew((*f)(lst->content))))
		{
			//ft_lstclear(&begin, del);
			return (0);
		}
		tmp = tmp->next;
	}
	return (begin);
}