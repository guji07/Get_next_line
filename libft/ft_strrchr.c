/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:30:49 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:30:53 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	int		i;
	char	*point;

	point = 0;
	i = -1;
	while (string[++i])
		if (string[i] == symbol)
			point = (char *)(string + i);
	if (symbol == string[i])
		return (char*)(string + i);
	return (point);
}
