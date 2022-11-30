/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:56:56 by kceder            #+#    #+#             */
/*   Updated: 2021/11/22 18:41:00 by kceder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = -1;
	ptr = (char *)str;
	if (c == '\0')
	{
		while (ptr[i])
			i++;
		return (ptr + i);
	}
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)(c))
		{
			j = i;
		}
		i++;
	}
	if (j != -1)
		return (ptr + j);
	return (NULL);
}
