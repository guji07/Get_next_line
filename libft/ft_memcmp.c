/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:01:59 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:06:09 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	long	long	i;

	i = 0;
	if (count)
	{
		while (((size_t)i < count - 1 &&
		(((unsigned char*)buf1)[i]) == (((unsigned char*)buf2)[i])))
			i++;
		return (((unsigned char*)buf1)[i] - ((unsigned char*)buf2)[i]);
	}
	return (0);
}
