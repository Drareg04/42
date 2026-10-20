/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */

/*                                                    +:+ +:+         +:+     */
/*   By: jangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:34:54 by jangarci          #+#    #+#             */
/*   Updated: 2026/10/10 16:02:17 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ftputchar(char c);

void	ftputline(char c, char v, int x)
{
	if (x >= 1)
		ftputchar(c);
	x--;
	while (1 < x)
	{
		ftputchar (v);
		x--;
	}
	if (x == 1)
		ftputchar (c);
	if (x >= 0)
		ftputchar ('\n');
}

void	rush(int x, int y)
{
	if (y >= 1)
		ftputline('A', 'B', x);
	y--;
	while (1 < y)
	{
		ftputline ('B', ' ', x);
		y--;
	}
	if (y == 1)
		ftputline ('C', 'B', x);
}
