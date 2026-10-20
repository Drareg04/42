/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 10:46:39 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/11 11:01:09 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	if (n >= 0)
		write(1, "P", 1);
}
/*
int	main(void)
{
	ft_is_negative(-41);
	ft_is_negative(42);
	ft_is_negative(0);
	return(0);
}
*/
