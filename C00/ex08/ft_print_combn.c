/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 17:22:24 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/12 14:40:39 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_max(int n, int max)
{
	int	temp;

	temp = 0;
	if (n > 1)
		temp = ft_max(n - 1, max + 1);
	return (temp * 10 + (9 - max));
}

void	ft_print_code(int i, int max)
{
	if (i > 0 && max > 1)
		ft_print_code(i / 10, max - 1);
	ft_putchar((i % 10) + '0');
}

int	ft_iterate(int n, int num, int max, int i)
{
	int	temp;

	temp = num / 10;
	if (i == 0 && num % 10 < 9)
		return (num + 1);
	if (num % 10 >= 9 - i && max != i)
		temp = ft_iterate(n - 1, num / 10, max, i + 1);
	else
		return (temp * 10 + (num % 10) + 1);
	return (temp * 10 + (temp % 10) + 1);
}

void	ft_print_combn(int n)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (++i < n)
		num = num * 10 + i;
	i = ft_max(n, 0);
	while (num <= i && n > 0 && n < 10)
	{
		ft_print_code(num, n);
		if (num < i)
			write(1, ", ", 2);
		num = ft_iterate(n, num, n, 0);
	}
}
/*
int main(void)
{
	ft_print_combn(2);
	return (0);
}
*/
