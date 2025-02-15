/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:53:54 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/18 13:02:38 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/*
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_is_negative(19);
	ft_is_negative(-1);
	ft_is_negative(0);
	return (0);
}
*/
