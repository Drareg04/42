/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:13:03 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/12 21:25:49 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int div;
	int mod;
	int a = 15;
	int b = 10;
	
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d\nb = %d\ndiv = %d\nmod = %d", a, b, div, mod);
	return(0);
}
*/
