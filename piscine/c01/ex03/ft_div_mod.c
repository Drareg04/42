/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:07:15 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/02 14:41:14 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main(void)
{
	int a = 100;
	int b = 23;
	int div;
	int mod;
	printf("----------antes-----------\na = %d \nb = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("---------despues----------\na = %d \nb = %d\ndiv = %d
	\nmod = %d", a, b, div, mod);
}*/
