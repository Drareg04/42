/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:03:30 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/20 10:51:41 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}
/*
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	main(int argc, char *str[])
{
	int	v;

	v = 1;
	while (argc > v)
	{
		ft_print_str(*(str + v));
		ft_putchar('\n');
		v++;
	}
	return (0);
}
