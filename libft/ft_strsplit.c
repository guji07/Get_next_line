/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:58:34 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/11 11:58:36 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			ft_wn(char *s, char c)
{
	int		i;
	int		n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
			n++;
		}
		else
			i++;
	}
	return (n + 2);
}

static	int			ft_wordlen(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	void		ft_free_ar(int n, char **ar)
{
	int j;

	j = n;
	while (j >= 0)
	{
		free(ar[j]);
		ft_bzero(ar[j], ft_strlen(ar[j]));
		j--;
		free(ar);
	}
	return ;
}

static	char		*ft_crnw(char *s, char **ar, int num, char c)
{
	int		n;
	char	*dest;

	n = ft_wordlen(s, c);
	if ((dest = (char*)ft_memalloc(n + 1)))
		ft_strncpy(dest, s, n);
	else
		ft_free_ar(num, ar);
	return (dest);
}

char				**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	char	**ar;

	if (c == '\0')
		return ((char**)ft_memalloc(1));
	if (!s)
		return (NULL);
	if ((ar = (char**)ft_memalloc(sizeof(char**) * ft_wn((char*)s, c))))
	{
		j = -1;
		i = -1;
		while (s[++i])
			if (s[i] != c)
			{
				j++;
				ar[j] = ft_crnw((char*)s + i, ar, j, c);
				i = i + (ft_strlen(ar[j]) - 1);
			}
	}
	return (ar);
}
