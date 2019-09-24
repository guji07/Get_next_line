/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:08:45 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:08:48 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	int	i;

	i = -1;
	while (string[++i])
		if (string[i] == symbol)
			return (char *)(string + i);
	if (string[i] == '\0' && symbol == '\0')
		return (char*)(string + i);
	return (0);
}
