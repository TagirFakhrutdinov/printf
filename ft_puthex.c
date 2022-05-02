/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:19:31 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/04 19:46:29 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(long long nb, char *base)
{
	int		n[16];
	int		i;
	int		len;

	i = 0;
	if (nb == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	if (nb < 0)
	{
		nb = 4294967295 + nb + 1;
		len = ft_puthex(nb, base);
		return (len);
	}
	while (nb != 0)
	{
		n[i++] = nb % 16;
		nb /= 16;
	}
	len = i--;
	while (i >= 0)
		ft_putchar_fd(base[n[i--]], 1);
	return (len);
}
