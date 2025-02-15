/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:52:41 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/09 13:20:12 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcount(char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		c;
	int		i;
	char	*arr;

	c = ft_strcount(src);
	arr = malloc(c * sizeof(char));
	i = 0;
	while (*(src + i) != '\0')
	{
		*(arr + i) = *(src + i);
		i++;
	}
	*(arr + i) = *(src + i);
	return (arr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%s\n", strdup("hola q tal"));
	printf("%s", ft_strdup("hola q tal"));
	return (0);
}
*/
