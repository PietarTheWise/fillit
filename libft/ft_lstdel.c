/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:57:44 by kceder            #+#    #+#             */
/*   Updated: 2021/11/23 17:41:04 by kceder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextptr;
	t_list	*ptr;

	ptr = *alst;
	while (ptr)
	{
		nextptr = ptr->next;
		ft_lstdelone(&ptr, del);
		ptr = nextptr;
	}
	*alst = NULL;
}
