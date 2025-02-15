/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:23:27 by glorza-p          #+#    #+#             */
/*   Updated: 2024/11/21 10:32:11 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putlist(char list[], char first, char second, char third)
{
	list[0] = ',';
	list[1] = ' ';
	list[2] = first;
	list[3] = second;
	list[4] = third;
}

void	ft_print_comb(void)
{
	char	list[5];

	ft_putlist(list, '0', '1', '2');
	write(1, "012", 3);
	while (list[2] < '7' || list[3] < '8' || list[4] < '9')
	{
		if (list[4] < '9')
			list[4]++;
		else if (list[3] < '8')
		{
			list[3]++;
			list[4] = list[3] + 1;
		}
		else
		{
			list[2]++;
			list[3] = list[2] + 1;
			list[4] = list[3] + 1;
		}
		write(1, list, 5);
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
