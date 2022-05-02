/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:13:06 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/07 13:13:47 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i(va_list argptr)
{
	int		i;
	int		len;
	char	*numb;

	i = va_arg(argptr, int);
	ft_putnbr_fd(i, 1);
	numb = ft_itoa(i);
	len = ft_strlen(numb);
	free(numb);
	return (len);
}
