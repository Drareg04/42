/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:16:02 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/19 18:46:49 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
        char    dest[32];
	char	test[32];
	*dest = *ft_strncpy(dest, "Hello Wolrd!", 3);
	*test = *strncpy(test, "Hello Wolrd!", 3);
        printf("My test:\n%s\n", dest);
	printf("Original srncpy:\n%s\n", test);
        return (0);
}
*/
