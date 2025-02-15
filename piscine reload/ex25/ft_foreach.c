/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:45:11 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/13 17:03:26 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
void	ft_putnbr(int nbr)
{
	printf("%d", nbr);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	start;

	start = 0;
	while (start < length)
	{
		(*f)(*(tab + start));
		start++;
	}
}
/*
int main(void)
{
	int arr[] = {6, 1, 4, 9, 3, 5, 7};
	ft_foreach(arr, 7, &ft_putnbr);
	return (0);
}
*/
