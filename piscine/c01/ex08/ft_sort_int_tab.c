/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:40:44 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/02 10:50:51 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_reagrupate(int size, int *parcialist, int *totalist, int s)
{
	int	start;

	start = 0;
	if (s == 0)
		totalist[start + size] = totalist[0];
	while (start < size)
	{
		totalist[start + s] = parcialist[start];
		start++;
	}
}

int	ft_separate(int size, int *tab, int *left, int *rigth)
{
	int	start;
	int	i;
	int	j;

	start = 1;
	i = 0;
	j = 0;
	while (start < size)
	{
		if (tab[start] < tab[0])
		{
			left[i] = tab[start];
			i++;
		}
		else
		{
			rigth[j] = tab[start];
			j++;
		}
		start++;
	}
	return (i);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	left[32];
	int	rigth[32];

	i = ft_separate(size, tab, left, rigth);
	j = (size - i) - 1;
	if (i > 1)
		ft_sort_int_tab(left, i);
	ft_reagrupate(i, left, tab, 0);
	i++;
	if (j > 1)
		ft_sort_int_tab(rigth, j);
	ft_reagrupate(j, rigth, tab, i);
}
/*#include <unistd.h>
int	main(void)
{
	int start = 0;
	char value = '0';
	int a[] = {5, 7, 4, 3, 1, 2, 9, 1, 3};
	while (start < 9)
	{
		value = a[start]+'0';
		write(1, &value, 1);
		write(1, ", ", 2);
		start++;
	}
	ft_sort_int_tab(a, 9);
	write(1, "\n", 1);
	start = 0;
	while (start < 9)
        {
                value = a[start]+'0';
                write(1, &value, 1);
                write(1, ", ", 2);
                start++;
        }
	
	return(0);
}*/
