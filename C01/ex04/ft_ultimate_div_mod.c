/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:26:15 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/12 21:49:39 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
/*
#include <stdio.h>

int main(void)
{
	int a = 42;
	int b = 10;

	printf("Before:\na = %d\nb = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After:\na = %d\nb = %d\n", a, b);
	return(0);
}
*/
