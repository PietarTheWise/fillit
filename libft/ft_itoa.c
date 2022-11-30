/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceder <kceder@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:43:33 by kceder            #+#    #+#             */
/*   Updated: 2021/11/23 12:40:01 by kceder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_length(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static void	ft_itoa_number(long nb, int *i, char *s)
{
	if (nb >= 10)
	{
		ft_itoa_number(nb / 10, i, s);
		ft_itoa_number(nb % 10, i, s);
	}
	else
	{
		s[*i] = nb + 48;
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nbr;
	int		i;

	i = 0;
	nbr = n;
	s = (char *)malloc(sizeof(char) * (ft_number_length(nbr) + 1));
	if (!s)
		return (NULL);
	if (nbr < 0)
	{
		s[i] = '-';
		i++;
		nbr = nbr * -1;
	}
	ft_itoa_number(nbr, &i, s);
	s[i] = '\0';
	return (s);
}
