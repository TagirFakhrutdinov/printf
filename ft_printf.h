/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:27:04 by kflorett          #+#    #+#             */
/*   Updated: 2021/11/04 19:29:59 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_print_c(va_list argptr);
int		ft_print_s(va_list argptr);
int		ft_print_i(va_list argptr);
int		ft_print_u(va_list argptr);
int		ft_print_x(va_list argptr);
int		ft_print_X(va_list argptr);
int		ft_print_p(va_list argptr);
int		ft_puthex(long long nb, char *base);

#endif
