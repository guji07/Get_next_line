/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:21:13 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 16:10:43 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	int i;

	i = -1;
	while (srcptr[(++i)] && i < (int)num)
		destptr[i] = srcptr[i];
	i--;
	if (i < (int)num - 1)
		while (++i < (int)num)
			destptr[i] = '\0';
	return (destptr);
}
