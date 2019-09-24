/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:10:33 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:10:53 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	int		n;
	int		j;

	if ((*to_find) == '\0')
		return (char*)(str);
	i = -1;
	while (str[++i] != '\0' && i < (int)len)
	{
		j = i;
		n = 0;
		if (str[j] == to_find[n])
		{
			while (to_find[n] && j < (int)len)
				if (to_find[++n] != str[++j])
					break ;
			if (to_find[n] == '\0')
				return (char*)(str + j - n);
		}
	}
	return (0);
}
