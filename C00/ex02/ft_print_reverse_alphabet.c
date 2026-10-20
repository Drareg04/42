/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 09:56:38 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/11 10:15:24 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = '{';
	while (c-- > 'a')
		write(1, &c, 1);
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/
