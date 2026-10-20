/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:12:03 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/19 10:33:27 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_checkrow(int i, int length, int *table, int *params);
int		ft_invcheckrow(int i, int length, int *table, int *params);
int		ft_checkcol(int i, int length, int *table, int *params);
int		ft_invcheckcol(int i, int length, int *table, int *params);
int		ft_backtracking(int i, int length, int *table, int *params);
void	ft_puttable(int length, int *table);

int	checkall(int i, int length, int *table, int *params)
{
	int	v;

	v = 0;
	v += ft_checkrow(i, length, table, params);
	v += ft_invcheckrow(i, length, table, params);
	v += ft_checkcol(i, length, table, params);
	v += ft_invcheckcol(i, length, table, params);
	return (v);
}

int	ft_seudobacktracking(int i, int length, int *table, int *params)
{
	int	v;
	int	x;

	x = 0;
	v = checkall(i, length, table, params);
	if (v % 5 == 0)
	{
		if (i < (length * length) - 1)
		{
			while (x == 0)
				x = ft_backtracking(i + 1, length, table, params);
			return (x);
		}
		else if (v == 20)
		{
			ft_puttable(length, table);
			return (1);
		}
		else
			return (0);
	}
	return (0);
}

int	ft_backtracking(int i, int length, int *table, int *params)
{
	int	x;

	x = 0;
	while (x == 0)
	{
		if (table[i] >= length)
		{
			table[i] = 0;
			ft_puttable(length, table);
			return (-1);
		}
		else
		{
			table[i] += 1;
			ft_puttable(length, table);
			x = ft_seudobacktracking(i, length, table, params);
		}
	}
	if (x == -1)
		return (0);
	return (x);
}
