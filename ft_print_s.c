/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:05:44 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/04 19:28:52 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(va_list argptr)
{
	char	*s;
	int		len;

	s = va_arg(argptr, char *);
	if (s == (void *)0)
	{
		ft_putstr_fd("(null)", 1);
		len = 6;
	}
	else
	{
		len = ft_strlen(s);
		ft_putstr_fd(s, 1);
	}
	return (len);
}
