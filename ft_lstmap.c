/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:52:39 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/24 12:05:37 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*start;
	void	*new_elem;

	new_elem = ft_lstnew((f)(lst->content));
	new_lst = new_elem;
	if (!new_lst)
	{
		(del)(new_lst->content);
		return (0);
	}
	start = new_lst;
	while (lst)
	{
		lst = lst->next;
		new_elem = ft_lstnew((f)(lst->content));
		new_lst->next = new_elem;
		if (!new_lst)
		{
			(del)(new_lst->content);
			return (0);
		}
		new_lst = new_lst->next;
	}
	return (start);
}

/*t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))//, void (*del)(void *))
{
	t_list	*begin;
	t_list	*tmp;
	int *c;
	void *d = (*f)(lst->content);
	if (!lst)
		return (0);
	if (!(tmp = ft_lstnew(d)))
		return (0);
	c = (int *)d;
	printf("%d c'est ici\n",*c);

	begin = tmp;
	while (lst->next)
	{
		c = tmp->content;
		lst = lst->next;		if (!(tmp->next = ft_lstnew((*f)(lst->content))))
		{
			//ft_lstclear(&begin, del);
			return (0);
		}
		tmp = tmp->next;
	}
	return (begin);
}*/