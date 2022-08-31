/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:59:29 by alukongo          #+#    #+#             */
/*   Updated: 2022/08/31 14:11:22 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_malloc_clear(t_alloc **lst)
{
	t_alloc	*tmp;

	if (*lst)
	{
		while (*lst != NULL)
		{
			tmp = (*lst)->next;
			if ((*lst)->ptr)
				free((*lst)->ptr);
			free(*lst);
			*lst = tmp;
		}
	}
}

void	add_new_node(t_alloc **alst, t_alloc *new)
{
	t_alloc	*tmp;

	tmp = *alst;
	if (tmp == NULL)
	{
		*alst = new;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

t_alloc	*lstnew_malloc(void *content)
{
	t_alloc	*li;

	li = malloc(sizeof(*li));
	if (!li)
		return (NULL);
	li->ptr = content;
	li->next = NULL;
	return (li);
}

void	*ft_malloc(int size, t_alloc	**lst)
{
	void	*alloc;

	alloc = malloc(size);
	if (!alloc)
		return (NULL);
	add_new_node(lst, lstnew_malloc(alloc));
	return (alloc);
}
