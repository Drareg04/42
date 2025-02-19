/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:45:00 by glorza-p          #+#    #+#             */
/*   Updated: 2025/02/19 14:06:02 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

void ft_printvar(char str*, int *i, va_list args)
{
	if (str[*i] == 'c')
		ft_putchr(va_arg(args, char));
	else if (str[*i] == 's')
		ft_putstr_fd(va_arg(args, char*), 1);
	//else if (str[*i] == 'p')
	else if(str[*i] == 'd')
		ft_putdec(va_arg(args, unsigned int))
	else if (str[*i] == 'i')
		ft_putstr_fd(ft_itoa(va_arg(args, int)), 1);
	else if (str[*i] == 'u')
		ft_putdec(va_arg(args, unsigned int))
	else if (str[*i] == 'x')
		ft_puthex(va_arg(args, unsigned int))
	else if (str[*i] == 'X')
		ft_puthex(va_arg(args, unsigned int))
	else if (str[*i] == '%')
		ft_putchr('%');
	else
		ft_putchr(str[i]);
}

int	ft_printf(const char str*, ...)
{
	int	i;
	va_list		args;

	va_start(args, str);
	i = 0;
	while (*str)
	{
		if (str[i] == '%')
			ft_printvar(str, &++i, args);
		else
			ft_putchr(str[i]);
		i++;
	}
	va_end(args);
	return(s);
}
