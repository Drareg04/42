/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:32 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/13 19:54:03 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	start;
	int	count;

	start = 0;
	count = 0;
	while (tab[start] != 0)
	{
		if ((f)(tab[start]) == 1)
			count++;
		start++;
	}
	return (count);
}
/*
int	ft_pito(char nabo[])
{
	int i = 0;
	char polla[] = "polla";
	while (polla[i] != '\0' || nabo[i] != '\0')
	{
		if (nabo[i] != polla[i])
			return (0);
		i++;
	}
	return(1);
}

#include <stdio.h>
int	main(void)
{
	char *sacodepitos[7] = \
	{"Cuclillas", "polla", "cactus", "tierra", "polla", "polla", 0};
	int i = ft_count_if(sacodepitos, ft_pito);
	printf("Hay %d pollas", i);
	return (0);
}
*/
