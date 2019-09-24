/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:11:26 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/11 12:02:46 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_createzero(void)
{
	char	*s;

	s = (char*)malloc(1);
	s[0] = '\0';
	return (s);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*str;

	if (s)
	{
		i = 0;
		n = ft_strlen(s);
		while (s[i] && (s[i] == '\t' || s[i] == ' ' || s[i] == '\n'))
			i++;
		while (n >= 0 && (s[n - 1] == '\t' ||
		s[n - 1] == ' ' || s[n - 1] == '\n'))
			n--;
		if ((size_t)i == ft_strlen(s) && *s)
			return (ft_createzero());
		if ((str = (char*)ft_memalloc(n - i + 1)))
		{
			ft_strncpy(str, s + i, n - i);
			return (str);
		}
	}
	return (NULL);
}
