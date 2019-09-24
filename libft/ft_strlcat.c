/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:20:40 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 16:12:46 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t count)
{
	int			i;
	int			j;
	size_t		n1;
	size_t		n2;

	i = 0;
	j = -1;
	n2 = ft_strlen(dst);
	n1 = ft_strlen(src);
	if (count <= n2)
		return (n1 + count);
	while (dst[i] && (i < (int)count - 1))
		i++;
	while ((src[++j]) && i < (((int)count) - 1))
		dst[i++] = src[j];
	dst[i] = '\0';
	return (n1 + n2);
}
