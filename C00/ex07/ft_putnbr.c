/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:34:36 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/12 17:00:32 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(long num)
{
	if (num >= 10)
		ft_print(num / 10);
	ft_putchar((num % 10) + '0');
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		num = -num;
		ft_putchar('-');
	}
	ft_print(num);
}
/*
int main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-89);
	write(1, "\n", 1);
	ft_putnbr(300);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	return(0);
}
*/
