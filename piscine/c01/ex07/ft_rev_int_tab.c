/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:24:54 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/01 14:23:35 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	temp;

	start = 0;
	size--;
	while (start <= size)
	{
		temp = tab[size];
		tab[size] = tab[start];
		tab[start] = temp;
		start++;
		size--;
	}
}

/*#include <stdio.h>
int main(void)
{
	int array[] = {60, 63, 69, 71};
	int length = 4;
	int i;
	for (i=0;i < length ; i++) {
    		printf("%d ",array[i]);
	}
	printf("\n");
	ft_rev_int_tab(array, length);
        for (i=0;i < length ; i++) {
                printf("%d ",array[i]);
        }
	return (0);
}*/
