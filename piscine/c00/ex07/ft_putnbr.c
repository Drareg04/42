/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:47:05 by glorza-p          #+#    #+#             */
/*   Updated: 2024/11/28 12:35:10 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_intlength(int nb)
{
	int	loop;

	loop = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		loop++;
	}
	return (loop);
}

void	ft_putnum(int len, int nb)
{
	int		temp;
	char	num[32];

	temp = len;
	while (temp -1 >= 0)
	{
		num[temp -1] = nb % 10 + '0';
		nb = nb / 10;
		temp--;
	}
	write(1, &num, len);
}

void	ft_putnbr(int nb)
{
	int	len;

	if (nb == -2147483648)
	{
		nb = -nb;
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	len = ft_intlength(nb);
	ft_putnum(len, nb);
}

/*int	main(void)
{
	ft_putnbr (-2147483648);
	return (0);
}*/
