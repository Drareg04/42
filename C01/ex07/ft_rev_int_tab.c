/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:46:18 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/13 16:18:00 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{	
	int tab[] = {25, 50, 75, 100};
	printf("%d %d %d %d reversed is: ", tab[0], tab[1], tab[2], tab[3]);
	ft_rev_int_tab(tab, 4);
	printf("%d %d %d %d", tab[0], tab[1], tab[2], tab[3]);
	return(0);
}
*/
