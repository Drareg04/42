/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:24:44 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/19 21:38:57 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
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

int main(void)
{
	ft_putstr("Pito jajaajjajajajajajjajaajja");
	return (0);
}
*/
