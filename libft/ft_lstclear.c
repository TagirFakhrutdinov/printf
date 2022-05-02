/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:35:48 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/24 15:06:40 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*tmp;

	if (lst != (void *)0)
	{
		while (*lst != (void *)0)
		{
			tmp = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
		*lst = (void *)0;
	}
}
