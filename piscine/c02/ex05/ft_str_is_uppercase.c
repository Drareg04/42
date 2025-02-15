/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:21:46 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/03 10:17:15 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 65 | *(str + i) > 90)
			return (0);
		i++;
	}
	return (1);
}
/*#include <unistd.h>
int main(void)
{
	int i = '0'+ft_str_is_uppercase("HJSDGAJDGASJDGJAZS");
	write(1, &i, 1);
	write(1, "\n", 1);
        i = '0'+ft_str_is_uppercase("SHDGJSHAJDGJKHDSAKj");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_uppercase("DSAKJFHSAJKFHJSA:");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_uppercase("HJFSKAksaDJSLADJKSAL");
        write(1, &i, 1);
        write(1, "\n", 1);
	i = '0'+ft_str_is_uppercase("LKSDJLSADDDSAKL");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_uppercase("jfsklajflkasHSd");
        write(1, &i, 1);
        write(1, "\n", 1);
	return (0);
}*/
