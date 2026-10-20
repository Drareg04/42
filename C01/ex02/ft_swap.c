/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:55:49 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/12 21:09:19 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main(void)
{
	int a = 42;
	int b = 69;

	printf("Before:\na = %d\nb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After:\na = %d\nb = %d", a, b);
}
*/
