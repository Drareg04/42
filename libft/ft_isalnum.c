/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 05:40:52 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/15 12:58:26 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(unsigned int c)
{
	if (c >= 'A' && c <= 'Z')
		return (8);
	if (c >= 'a' && c <= 'z')
		return (8);
	if (c >= '0' && c <= '9')
		return (8);
	return (0);
}
