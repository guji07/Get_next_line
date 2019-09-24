/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:39:02 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:25:52 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static		int		ft_whtnbr(int num)
{
	int i;

	i = 0;
	if (num > 0)
		i = 0;
	if ((num < 0) && (num > (-2147483648)))
		i = 1;
	if (num == -2147483648)
		i = 2;
	return (i);
}

static		void	ft_screen(int nb)
{
	int div;
	int n;

	n = 1;
	div = 1;
	while (div <= nb / 10)
	{
		n++;
		div = div * 10;
	}
	while (n > 0)
	{
		ft_putchar('0' + (nb / div));
		nb = nb % div;
		div = div / 10;
		n--;
	}
}

void				ft_putnbr(int nb)
{
	if ((ft_whtnbr(nb)) == 0)
		ft_screen(nb);
	else if ((ft_whtnbr(nb)) == 1)
	{
		ft_putchar('-');
		nb = nb * (-1);
		ft_screen(nb);
	}
	else if ((ft_whtnbr(nb)) == 2)
	{
		ft_putchar('-');
		nb = nb / 10;
		ft_screen(-nb);
		ft_putchar('8');
	}
}
