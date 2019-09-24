/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:20:49 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:24:45 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			str[i] = f((unsigned int)i, s[i]);
		str[i] = '\0';
	}
	return (str);
}
