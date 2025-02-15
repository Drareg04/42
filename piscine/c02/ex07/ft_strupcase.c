/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:30:09 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/03 13:12:27 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "23_-3frewg4wvfsd4";
	printf("%s", ft_strupcase(str));
	return(0);
}*/
