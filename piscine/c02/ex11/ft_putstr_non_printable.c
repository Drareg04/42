/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:04:30 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/05 19:27:25 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int hn)
{
	if (hn < 10)
		hn += 48;
	else if (hn > 9)
		hn += 87;
	write(1, &hn, 1);
}

void	ft_print_non_print(char np)
{
	int	r;
	int	d;
	int	b;

	b = 92;
	d = np % 16;
	r = np / 16;
	write(1, &b, 1);
	ft_print_hex(r);
	ft_print_hex(d);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 | *(str + i) > 126)
			ft_print_non_print(*(str + i));
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	ft_putstr_non_printable("Adklsa;kldsajlkdsa\nksidjalfjadfsa");
	return (0);
}
*/
