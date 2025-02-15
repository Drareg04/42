/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:27:19 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/19 18:23:01 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int div;
	int mod;
	int a = 10;
	int b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf("%d/%d=%d\n%d%%%d=%d", a, b, div, a, b, mod);
	return (0);
}
*/
