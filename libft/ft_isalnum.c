/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:57:31 by kceder            #+#    #+#             */
/*   Updated: 2021/11/19 17:07:10 by kceder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (arg > 64 && arg < 91)
		return (1);
	else if (arg > 96 && arg < 123)
		return (1);
	else if (arg > 47 && arg < 58)
		return (1);
	else
		return (0);
}
