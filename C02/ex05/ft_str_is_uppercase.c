/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:35:15 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/14 17:44:11 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
		if (*str < 'A' || *str++ > 'Z')
			return (0);
	return (1);
}
/*
#include <unistd.h>

int main(void)
{
	int i = ft_str_is_uppercase("12412dsa1213") + '0';
	write (1, &i, 1);
	return (1);
}
*/
