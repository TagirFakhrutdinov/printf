/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:20:01 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/05 12:40:16 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ptr(unsigned long long nb, char *base)
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
		nb = 0xFFFFFFFFUL + nb + 1;
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

static int	ft_put_ptr(void *p)
{
	unsigned long long	nb;
	int					len;
	char				*base;

	base = "0123456789abcdef";
	nb = (unsigned long long)p;
	len = ft_puthex_ptr(nb, base);
	return (len);
}

int	ft_print_p(va_list argptr)
{
	void	*p;
	int		len;

	len = 2;
	p = va_arg(argptr, void *);
	ft_putstr_fd("0x", 1);
	len += ft_put_ptr(p);
	return (len);
}
