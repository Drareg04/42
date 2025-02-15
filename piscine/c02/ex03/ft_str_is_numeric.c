/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:21:46 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/03 10:03:13 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 48 | *(str + i) > 57)
			return (0);
		i++;
	}
	return (1);
}
/*#include <unistd.h>
int main(void)
{
	int i = '0'+ft_str_is_numeric("831290834902184093");
	write(1, &i, 1);
	write(1, "\n", 1);
        i = '0'+ft_str_is_numeric("832109831920j021908");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_numeric("213312-09321-");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_numeric("21312312*");
        write(1, &i, 1);
        write(1, "\n", 1);
	i = '0'+ft_str_is_numeric("29310989032180312/");
        write(1, &i, 1);
        write(1, "\n", 1);
        i = '0'+ft_str_is_numeric("2132109309128312:321312");
        write(1, &i, 1);
        write(1, "\n", 1);
	return (0);
}*/
