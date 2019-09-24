/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:59:03 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:07:06 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static		int	ft_intlen(int n)
{
	int		i;

	if (n >= 0)
	{
		i = 1;
		while ((n /= 10) > 0)
			i++;
		return (i);
	}
	else if (n == 0)
		return (1);
	else
	{
		n = n * (-1);
		i = 2;
		while ((n /= 10) > 0)
			i++;
		return (i);
	}
}

static	void	ft_positive(char *str, int n)
{
	int	i;
	int div;

	div = 1000000000;
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	i = -1;
	while (!(n / div))
		div = div / 10;
	while (div > 0)
	{
		str[++i] = '0' + (n / div);
		n = n % div;
		div = div / 10;
	}
	str[i + 1] = '\0';
}

char			*ft_itoa(int n)
{
	char *str;

	if ((str = (char*)malloc(ft_intlen(n) + 1)))
	{
		if (n == -2147483648)
			ft_strcpy(str, "-2147483648");
		else if (n < 0)
		{
			str[0] = '-';
			n = n * (-1);
			ft_positive(str + 1, n);
		}
		else
			ft_positive(str, n);
	}
	return (str);
}
