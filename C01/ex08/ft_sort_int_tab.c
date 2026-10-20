/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:19:30 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/14 09:27:35 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_merge(int *tab, int *first, int *second, int i[4])
{
	int	o[3];
	int	a;

	a = 0;
	while (a < 3)
	{
		o[a] = 0;
		a++;
	}
	while (o[0] < i[1])
		tab[o[0]++] = first[o[1]++];
	tab[o[0]++] = i[3];
	while (o[0] < i[0])
		tab[o[0]++] = second[o[2]++];
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	first[32];
	int	second[32];
	int	i[4];
	int	a;

	a = 0;
	while (a < 3)
	{
		i[a] = 0;
		a++;
	}
	i[a] = tab[0];
	while (i[0]++ < size - 1)
	{
		if (tab[i[0]] <= tab[0])
			first[i[1]++] = tab[i[0]];
		else
			second[i[2]++] = tab[i[0]];
	}
	if (i[1] > 1)
		ft_sort_int_tab(first, i[1]);
	if (i[2] > 1)
		ft_sort_int_tab(second, i[2]);
	ft_merge(tab, first, second, i);
}
/*
#include <stdio.h>

int main(void)
{
	int list[] = {9, 2, 10, 3, 199, 32, 42, 42, 0, 78};
	int i = -1;

	printf("Before:\n");
	while (++i < 10)
		printf("%d ", list[i]);
	i = -1;
	ft_sort_int_tab(list, 10);
	printf("\nAfter:\n");
	while (++i < 10)
		printf("%d ", list[i]);
}
*/
