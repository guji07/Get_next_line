/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:16:50 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:16:51 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_whtnbr(int num)
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

static	void	ft_screen_fd(int nb, int fd)
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
		ft_putchar_fd('0' + (nb / div), fd);
		nb = nb % div;
		div = div / 10;
		n--;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	if ((ft_whtnbr(n)) == 0)
		ft_screen_fd(n, fd);
	else if ((ft_whtnbr(n)) == 1)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
		ft_screen_fd(n, fd);
	}
	else if ((ft_whtnbr(n)) == 2)
	{
		ft_putchar_fd('-', fd);
		n = n / 10;
		ft_screen_fd(-n, fd);
		ft_putchar_fd('8', fd);
	}
}
