/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:54:30 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:00:15 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source,
		int ch, size_t count)
{
	int i;

	i = -1;
	while (++i < ((int)count))
	{
		((char*)dest)[i] = ((char*)source)[i];
		if (((char*)dest)[i] == (char)ch)
		{
			return ((char*)(dest) + i + 1);
		}
	}
	return (NULL);
}
