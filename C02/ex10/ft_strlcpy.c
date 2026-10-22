/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:59:12 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/19 20:01:57 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (i < size -1 && size > 0)
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	if (size > 0 && j < size)
		dest[j] = '\0';
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char	dest[9];

	printf("%s\n%d", dest, ft_strlcpy(dest, "Pito Pato", 3));
}
*/
