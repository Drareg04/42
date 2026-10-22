/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:35:15 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/19 11:09:50 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
		if (*str < 32 || *str++ > 126)
			return (0);
	return (1);
}
/*
#include <unistd.h>

int main(void)
{
	int i = ft_str_is_printable("1241\2dsa1213") + '0';
	write (1, &i, 1);
	return (1);
}
*/
