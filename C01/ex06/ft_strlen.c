/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:50:00 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/13 11:44:35 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "Hola";
	printf("'%s' has %d", str ,ft_strlen(str));
	return(0);
}
*/
