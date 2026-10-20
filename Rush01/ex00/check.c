/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:24:07 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/18 19:57:51 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkvalid(char *list)
{
	int	i;
	int	length;

	i = 0;
	while (list[i])
		i++;
	i++;
	if ((i / 2) % 4 == 0)
		length = (i / 2);
	else
		return (0);
	i = 0;
	while (list[i])
	{
		if (i % 2 == 0 && (list[i] < '1' || list[i] > (length / 4) + '0'))
			return (0);
		else if (i % 2 != 0 && list[i] != ' ')
			return (0);
		i++;
	}
	return (length / 4);
}

int	ft_checkrow(int i, int length, int *table, int *param)
{
	int	j;
	int	maxnum;
	int	count;

	j = length * (i / length);
	maxnum = 0;
	count = 0;
	while (j < i)
	{
		if (table[j] == table[i])
			return (1);
		if (table[j] > maxnum)
		{
			count++;
			maxnum = table[j];
		}
		j++;
	}
	if (table[j] > maxnum)
		count++;
	if (count == param[(2 * length) + (i / length)])
		return (5);
	if (count > param[(2 * length) + (i / length)])
		return (1);
	return (0);
}

int	ft_invcheckrow(int i, int length, int *table, int *param)
{
	int	j;
	int	maxnum;
	int	count;
	int	stopper;

	stopper = length * (i / length);
	j = i;
	maxnum = 0;
	count = 0;
	while (stopper <= j)
	{
		if (table[j] > maxnum)
		{
			count++;
			maxnum = table[j];
		}
		j--;
	}
	if (count == param[(3 * length) + (i / length)])
		return (5);
	if (count > param[(3 * length) + (i / length)])
		return (1);
	return (0);
}

int	ft_checkcol(int i, int length, int *table, int *param)
{
	int	j;
	int	maxnum;
	int	count;

	j = i % length;
	maxnum = 0;
	count = 0;
	while (j < i)
	{
		if (table[j] == table[i])
			return (1);
		if (table[j] > maxnum)
		{
			count++;
			maxnum = table[j];
		}
		j += length;
	}
	if (table[j] > maxnum)
		count++;
	if (count == param[i % length])
		return (5);
	if (count > param[i % length])
		return (1);
	return (0);
}

int	ft_invcheckcol(int i, int length, int *table, int *param)
{
	int	j;
	int	maxnum;
	int	count;
	int	stopper;

	stopper = i % length;
	j = i;
	maxnum = 0;
	count = 0;
	while (stopper <= j)
	{
		if (table[j] > maxnum)
		{
			count++;
			maxnum = table[j];
		}
		j -= length;
	}
	if (count == param[length + (i % length)])
		return (5);
	if (count > param[length + (i % length)])
		return (1);
	return (0);
}
