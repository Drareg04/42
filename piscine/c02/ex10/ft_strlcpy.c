/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:31:35 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/05 19:26:33 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		if (i < size)
			*(dest + i) = *(src + i);
		else if (i == size)
			*(dest + i - 1) = '\0';
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[10];
	int size = 10;
	printf("%u", ft_strlcpy(dest, "Hello, World!", size));
	for(int i = 0; i < size; i++) {
		printf("%c ", dest[i]);
	}
}
*/
