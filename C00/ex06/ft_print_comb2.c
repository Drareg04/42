/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:45:48 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/13 20:18:57 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int f, int s)
{
	ft_putchar((f / 10) + 48);
	ft_putchar((f % 10) + 48);
	ft_putchar(' ');
	ft_putchar((s / 10) + 48);
	ft_putchar((s % 10) + 48);
	if (f < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	s = 0;
	while (f < 99)
	{
		while (s++ < 99)
			ft_putnum(f, s);
		s = ++f;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return(0);
}
*/
