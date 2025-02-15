/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:30:09 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/03 13:13:42 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "23_-36B5G74GF6C44";
	printf("%s", ft_strlowcase(str));
	return(0);
}*/
