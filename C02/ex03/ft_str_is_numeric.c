/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:35:15 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/19 10:59:18 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
		if (*str < '0' || *str++ > '9')
			return (0);
	return (1);
}
/*
#include <unistd.h>

int main(void)
{
	int i = ft_str_is_numeric("12412dsa1213") + '0';
	write (1, &i, 1);
	return (1);
}
*/
