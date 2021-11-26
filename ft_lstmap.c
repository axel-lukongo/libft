/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:52:39 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 12:17:06 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//good
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
