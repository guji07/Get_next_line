/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:21:05 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:23:30 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t count)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (str1[i])
		i++;
	while (str2[++j] && j < (int)count)
		str1[i++] = str2[j];
	str1[i] = '\0';
	return (str1);
}
