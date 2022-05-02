/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:05:08 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/04 19:28:52 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_X(va_list argptr)
{
	int		i;
	int		len;
	char	*base;

	base = "0123456789ABCDEF";
	i = va_arg(argptr, int);
	len = ft_puthex(i, base);
	return (len);
}
