/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:28:32 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/02 11:29:49 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*#include <stdio.h>
int main(void)
{
        int a = 9;
        int b = 2;
        int div;
        int mod;
	printf("A es = a: %d \nB es = a: %d",a,b);
        ft_ultimate_div_mod(&a, &b);
        printf("\nA es = a: %d \nB es = a: %d",a,b);

}*/
