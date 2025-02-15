/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:25:13 by glorza-p          #+#    #+#             */
/*   Updated: 2024/11/27 09:40:30 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnum(int len, int nb, int comma)
{
	int		temp;
	char	num[9];

	temp = len;
	while (temp -1 >= 0)
	{
		if (nb != 0)
		{
			num[temp -1] = nb % 10 + '0';
			nb = nb / 10;
		}
		else
		{
			num[temp -1] = '0';
		}
		temp--;
	}
	if (comma == 1)
	{
		write(1, ", ", 2);
	}
	write(1, &num, len);
}

int	ft_check_ass(int n, int length)
{
	int	a;
	int	b;

	while (length -1 > 0)
	{
		a = n % 10;
		n = n / 10;
		b = n % 10;
		if (b >= a)
		{
			return (0);
		}
		length--;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	start;
	int	finish;
	int	boolean;
	int	length;
	int	comma;

	start = 0;
	comma = 0;
	finish = 10 - n;
	length = n;
	while (length > 1)
	{
		finish = finish * 10 + finish % 10 + 1;
		length--;
	}
	while (start <= finish)
	{
		boolean = ft_check_ass(start, n);
		if (boolean == 1)
		{
			ft_putnum(n, start, comma);
			comma = 1;
		}
		start++;
	}
}

/*int	main(void)
{
	ft_print_combn(3);
	return (0);
}*/
