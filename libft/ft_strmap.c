/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:19:08 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:19:08 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (!(s && f))
		return (NULL);
	i = -1;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str)
	{
		while (s[++i])
			str[i] = f(s[i]);
		str[i] = '\0';
	}
	return (str);
}
