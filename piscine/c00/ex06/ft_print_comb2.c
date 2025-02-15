/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:47:53 by glorza-p          #+#    #+#             */
/*   Updated: 2024/11/28 12:34:54 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write_num(int i)
{
	int	num;

	num = '0' + i / 10;
	write(1, &num, 1);
	num = '0' + i % 10;
	write(1, &num, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 2;
	write (1, "00 01", 5);
	while (a < 99)
	{
		while (b <= 99)
		{
			if (a < b)
			{
				write(1, ", ", 2);
				ft_write_num(a);
				write(1, " ", 1);
				ft_write_num(b);
			}
			b++;
		}
		b = 0;
		a++;
	}
}

/*int main(void)
{
	ft_print_comb2();
	return(0);
}*/
