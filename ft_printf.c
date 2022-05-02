/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:19:23 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/06 19:31:57 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_parser(const char *str, va_list argptr)
{
	int	count;

	count = 1;
	if (*str == 'c')
		ft_print_c(argptr);
	else if (*str == 's')
		count = ft_print_s(argptr);
	else if (*str == 'd' || *str == 'i')
		count = ft_print_i(argptr);
	else if (*str == 'u')
		count = ft_print_u(argptr);
	else if (*str == 'x')
		count = ft_print_x(argptr);
	else if (*str == 'X')
		count = ft_print_X(argptr);
	else if (*str == 'p')
		count = ft_print_p(argptr);
	else if (*str == '%')
		ft_putchar_fd('%', 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		counter;

	counter = 0;
	va_start(argptr, str);
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			counter++;
		}
		else
		{
			str++;
			counter += ft_parser(str, argptr);
		}
		str++;
	}
	va_end (argptr);
	return (counter);
}
