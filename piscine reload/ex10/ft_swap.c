/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:09:58 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/18 13:24:37 by glorza-p         ###   ########.fr       */
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
	int a = 20;
	int b = 3;

	printf("Before: a=%d, b=%d", a, b);
	ft_swap(&a,&b);
	printf("\nAfter : a=%d , b=%d", a, b);
	return (0);
}
*/
