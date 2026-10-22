/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:48:03 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/20 16:35:24 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int main(void)
{
	char	dest[32];
	*dest = *ft_strcpy(dest, "Hello Wolrd!");
	int i = -1;
	while (dest[i])
		i++;
	write(1, dest, i);
	return (0);
}
*/
