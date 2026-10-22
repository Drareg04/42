/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:29:36 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/20 19:30:04 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str != 0 && str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write (1, str + i, 1);
		else
		{
			write (1, "\\", 1);
			write (1, &"0123456789abcdef"[(unsigned char) str[i] / 16], 1);
			write (1, &"0123456789abcdef"[(unsigned char) str[i] % 16], 1);
		}
		i++;
	}
}
/*
int main(void)
{
	char text[] = "He\nllo\033How are \tyou?";	
	ft_putstr_non_printable(text);
	char test[2];

	unsigned char a;
	test[1] = '\0';
	while (a <= 255)
	{
		test[0] = (char) a;
		ft_putstr_non_printable(test);
		if (a == 255)
			break;
		a++;
	}
	return(1);
}
*/
