/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:59:14 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:08:36 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (dst);
	if (src > dst)
	{
		ft_memcpy(dst, src, n);
	}
	else if (src < dst)
		while (++i <= (int)n)
			((char*)dst)[n - i] = ((char *)src)[n - i];
	return (dst);
}
