/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:26:38 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/09 12:03:45 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	int a = 12;
	printf("%d! = %d", a, ft_iterative_factorial(a));
	return (0);
}
*/
