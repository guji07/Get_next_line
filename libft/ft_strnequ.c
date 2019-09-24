/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:17:52 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:29:44 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		i = -1;
		while (s1[++i] && s2[i] && i < (int)n)
		{
			if (s1[i] != s2[i])
				return (0);
		}
		if (s1[i] != s2[i] && i < (int)n)
			return (0);
		return (1);
	}
	else
		return (0);
}
