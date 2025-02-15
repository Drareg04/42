/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:51:02 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/09 12:30:16 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_string(char str[])
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	check_ass(char *low, char *new)
{
	int	i;

	i = 0;
	while (low[i] != '\0' || new[i] != '\0')
	{
		if (new[i] < low[i])
			return (1);
		else if (new[i] > low[i])
			return (0);
		i++;
	}
	return (0);
}

int	ft_print_lowest(int argc, char **argl)
{
	int	low;
	int	start;
	int	i;

	start = 1;
	low = 1;
	while (start < argc)
	{
		i = check_ass(*(argl + low), *(argl + start));
		if (i == 1)
			low = start;
		start++;
	}
	ft_print_string(*(argl + low));
	return (low);
}
/*
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	sort(int argc, char **argl)
{
	int	i;

	while (argc > 1)
	{
		i = ft_print_lowest(argc, argl);
		ft_putchar('\n');
		*(argl + i) = *(argl + argc -1);
		argc--;
	}
}

int	main(int argc, char **argl)
{
	sort(argc, argl);
	return (0);
}
