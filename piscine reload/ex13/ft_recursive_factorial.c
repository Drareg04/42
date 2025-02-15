/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:58:08 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/09 11:48:35 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	i = ft_recursive_factorial(nb -1);
	return (nb * i);
}
/*
#include <stdio.h>
int main(void)
{
	int a = 12;
	printf("%d! = %d", a, ft_recursive_factorial(a));
	return (0);
}
*/
