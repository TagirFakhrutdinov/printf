/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:29:43 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/04 19:48:42 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putunsign_fd(unsigned int u)
{
	long int	base;
	int			len;

	len = 0;
	if (u == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	base = 1;
	while ((u / base) != 0)
	{
		base = base * 10;
		len++;
	}
	base = base / 10;
	while (base != 0)
	{
		ft_putchar_fd((u / base) + '0', 1);
		u = u % base;
		base = base / 10;
	}
	return (len);
}

int	ft_print_u(va_list argptr)
{
	unsigned int	u;
	int				len;

	u = va_arg(argptr, unsigned int);
	len = ft_putunsign_fd(u);
	return (len);
}
