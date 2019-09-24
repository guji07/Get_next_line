/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:14:32 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/11 10:14:33 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*node;

	if (!(node = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	else if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (((node->content) = malloc(content_size)))
		{
			ft_memcpy((node->content), content, content_size);
			node->content_size = content_size;
		}
		else
		{
			free(node->content);
			free(node);
			return (NULL);
		}
	}
	(node->next) = NULL;
	return (node);
}
