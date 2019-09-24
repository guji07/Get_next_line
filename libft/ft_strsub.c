/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:12:46 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:31:35 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (s)
	{
		if ((str = (char*)malloc(len + 1)))
		{
			i = start - 1;
			while (++i < (int)(start + len))
				str[i - start] = s[i];
			str[i - start] = '\0';
		}
		return (str);
	}
	return (NULL);
}
