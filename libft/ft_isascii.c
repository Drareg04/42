/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 07:43:55 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/24 13:41:07 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(unsigned int c)
{
	if (c <= 127)
		return (1);
	return (0);
}
