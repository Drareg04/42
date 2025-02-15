/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_v3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:48:58 by bsamy             #+#    #+#             */
/*   Updated: 2024/11/24 22:44:03 by bsamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define N 6

int	matrix[N][N] = {0};
int	row_clues[2][N] = {{3, 4, 3, 3, 2, 1}, {3, 2, 2, 1, 3, 3}};
int	col_clues[2][N] = {{6, 5, 1, 2, 2, 3}, {1, 2, 3, 2, 2, 3}};

int     ft_strlen(char *str)
{
	int     i;
	
	i = 0;
        while (str[i])
		i++;
	return (i);
}

int	is_not_duplicated(int num, int row, int col)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (matrix[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < N)
	{
		if (matrix[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	get_max_height(int l[])
{
	int	max_height;
	int	num_visible;
	int	i;

	i = 0;
	max_height = 0;
	num_visible = 0;
	while (i < N)
	{
		if (l[i] > max_height)
		{
			num_visible++;
			max_height = l[i];
		}
		i++;
	}
	return (num_visible);
}

int	get_max_reversed_height(int l[])
{
	int	max_height;
	int	num_visible;
	int	i;

	i = N;
	max_height = 0;
	num_visible = 0;
	while (i > 0)
	{
		if (l[i - 1] > max_height)
		{
			num_visible++;
			max_height = l[i - 1];
		}
		i--;
	}
	return (num_visible);
}

void	print_board(void)
{
	int	i;
	int	j;
	char	curr_num;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			curr_num = matrix[i][j] + 48;
			write(1 ,&curr_num, 1);
			j++;
			if (j != N)
				write(1, " ", 1);
		}
		i++;
		write(1, "\n", 1);
	}
}

int	solve_rush01_v2(void)
{
	int	flag_on;
	int	num;
	int	row;
	int	col;

	flag_on = 1;
	row = 0;
	col = 0;
	while (flag_on)
	{	
		
		if (row == N)
			return (1);
		if (row == -1)
			return (0);
		if (col == N)
		{
			row++;
			col = 0;
			continue;
		}
		if (col == - 1)
		{
			row--;
			col = N - 1;
			continue;
		}
		num = matrix[row][col] + 1;
		if (num == N + 1)
		{
			matrix[row][col] = 0;
			col--;
			continue;
		}
		if (is_not_duplicated(num, row, col))
		{
			matrix[row][col] = num;
			if (col == N - 1)
			{
				if (get_max_height(matrix[row]) == row_clues[0][row]
						&& get_max_reversed_height(matrix[row])
						== row_clues[1][row])
				{
					col++;
					continue;	
				}
				else
				{
					matrix[row][col] = 0;
					col--;
					continue;
				}
			}
			if (row == N - 1)
			{
				int     i;
				int my_arr[N + 1];
				i = 0;
				while(i < N)
				{
					my_arr[i] = matrix[i][col];
					i++;
				}
					
				if (get_max_height(my_arr) == col_clues[0][col]
						&& get_max_reversed_height(my_arr)
						== col_clues[1][col])
				{
					my_arr[N] = 0;
					col++;
				}
				else
				{
					matrix[row][col] = 0;
					col--;
				}
				continue;
			}
			col++;
			continue;
		}
		else
		{
			matrix[row][col] = num;
			if (num == N)
			{
				matrix[row][col] = 0;
				col--;
				continue;
			}
			else
			{
				continue;
			}
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
//	if (ac != 2 or ft_strlen(av[1] % 4 != 0)
//		write(1, "Error\n", 6);
//		return (0);

	if(solve_rush01_v2())
		print_board();
	else
		write(1, "Error\n", 6);

	return (0);
}
