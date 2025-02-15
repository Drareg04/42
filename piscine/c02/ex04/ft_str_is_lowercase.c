/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:21:46 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/03 10:07:53 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 97 | *(str + i) > 122)
			return (0);
		i++;
	}
	return (1);
}
/*#include <unistd.h>
int main(void)
{
	int i = '0'+ft_str_is_lowercase("fsafsafasdasgdsafsda");
	write(1, &i, 1);
	write(1, "\n", 1);
        i = '0'+ft_str_is_lowercase("fsafksa;lkfasfsa");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_lowercase("Akfsldafdsfsd");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_lowercase("jfsajfkslajfJ");
        write(1, &i, 1);
        write(1, "\n", 1);
	i = '0'+ft_str_is_lowercase("fsafasdasfasfa/");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_lowercase("jfsklajflkasHSd");
        write(1, &i, 1);
        write(1, "\n", 1);
	return (0);
}*/
