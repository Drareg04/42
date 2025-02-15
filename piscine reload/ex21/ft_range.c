/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:17:29 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/10 12:30:09 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	count(int min, int max)
{
	int	i;

	i = min;
	while (i < max)
		i++;
	i -= min;
	return (i);
}

void	put(int *arr, int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		*(arr + i) = min;
		min++;
		i++;
	}
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = count(min, max);
	arr = malloc (i * sizeof(int));
	if (max <= min)
		return (NULL);
	else
	{
		put(arr, min, max);
		return (arr);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int min = 0;
	int max = 8;
	int dif = max-min;
	int* arr = ft_range(min, max);
	for (int i = 0; i < dif; i++)
		printf("%d\n", arr[i]);
	if (max <= min)
                printf("%p\n", arr);
	return (0);
}
*/
