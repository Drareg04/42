/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:21:46 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/03 10:30:32 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 | *(str + i) > 126)
			return (0);
		i++;
	}
	return (1);
}
/*#include <unistd.h>
int main(void)
{
	int i = '0'+ft_str_is_printable("dsaJL:D'L#Q)_#Kp['aLDS");
	write(1, &i, 1);
	write(1, "\n", 1);
        i = '0'+ft_str_is_printable("S()!K!_KD!DLD)AKD)(SAK");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_printable("DSAK KDSAL:KDFf;l A:LFa;ks;la");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_printable("`~dsafsafokpsdagkdspo");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_printable("fksalfj\akfaslfjas");
        write(1, &i, 1);
        write(1, "\n", 1);
	return (0);
}*/
