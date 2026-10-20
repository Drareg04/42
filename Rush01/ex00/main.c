/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:32:55 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/19 10:35:57 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_backtracking(int i, int length, int *table, int *params);
int	ft_checkvalid(char *list);

int	*ft_setarray(char *list, int *param)
{
	int	i;

	i = 0;
	while (list[i])
	{
		if (i % 2 == 0)
			param[i / 2] = list[i] - '0';
		i++;
	}
	return (param);
}

int	*ft_settable(int length, int *table)
{
	int	i;

	i = 0;
	length = length * length;
	while (i < length)
		table[i++] = 0;
	return (table);
}

void	ft_puttable(int length, int *table)
{
	int	i;
	int	j;

	i = 0;
	write (1, "\033[2J\033[H", 7);
	while (i <= (length * length) - 1)
	{
		j = table[i] + '0';
		write (1, &j, 1);
		if (i % length == length - 1)
			write (1, "\n", 1);
		else
			write (1, " ", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	length;
	int	*table;
	int	*param;

	if (argc != 2)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	length = ft_checkvalid(argv[1]);
	param = (int *) malloc(length * 4 * 4);
	table = (int *) malloc(length * length * 4);
	if (length < 1 || length > 9)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	ft_settable(length, table);
	ft_setarray(argv[1], param);
	if (ft_backtracking(0, length, table, param) != 1)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	return (0);
}
