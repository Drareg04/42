/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:01:37 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/11 12:27:48 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_code(int i)
{
	ft_putchar ((i / 100) + 48);
	ft_putchar (((i / 10) % 10) + 48);
	ft_putchar ((i % 10) + 48);
	if (i < 789)
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;

	i = 12;
	while (i <= 789)
	{
		if (i / 100 < (i / 10) % 10 && (i / 10) % 10 < i % 10)
			ft_print_code(i);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return(0);
}
*/
