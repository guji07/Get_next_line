/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:20:58 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:23:04 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	char	*str;
	int		i;

	i = -1;
	j = -1;
	str = NULL;
	if (s1 && s2)
	{
		if ((str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		{
			while (s1[++i])
				str[i] = s1[i];
			while (s2[++j])
				str[i++] = s2[j];
			str[i] = '\0';
		}
	}
	return (str);
}
