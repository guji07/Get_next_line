/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:14:03 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/11 10:14:13 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *begin;
	t_list *list;
	t_list *new;

	begin = NULL;
	if (lst && f)
	{
		list = (t_list*)malloc(sizeof(t_list*));
		list = f(lst);
		begin = list;
		lst = lst->next;
		while (lst)
		{
			new = (t_list*)malloc(sizeof(t_list*));
			new = f(lst);
			list->next = new;
			list = list->next;
			lst = lst->next;
		}
	}
	return (begin);
}
