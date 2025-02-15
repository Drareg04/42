/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:21:46 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/03 10:46:26 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 65 | *(str + i) > 90 && \
				*(str + i) < 97 | *(str + i) > 122)
			return (0);
		i++;
	}
	return (1);
}
/*#include <unistd.h>
int main(void)
{
	int i = '0'+ft_str_is_alpha("fsjaaklfjaslfjasz");
	write(1, &i, 1);
	write(1, "\n", 1);
        i = '0'+ft_str_is_alpha("fsjaaklfja22slfjasl");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_alpha("fsjaaklfja2slfjasl");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_alpha("fsjaaklfjasl:fjasl");
        write(1, &i, 1);
        write(1, "\n", 1);
	i = '0'+ft_str_is_alpha("jdsakdlkdsla\ndsadas");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_alpha("fsjaaklfjaAZslfjasl");
        write(1, &i, 1);
        write(1, "\n", 1);
	return (0);
}*/
