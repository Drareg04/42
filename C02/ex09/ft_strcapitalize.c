/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:04:00 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/19 18:52:16 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanum(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ft_is_alphanum(str[i - 1]) == 0)
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0 && ft_is_alphanum(str[i - 1]) == 1)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int main(void)
{
        char str[] = "hi, hOw Are you? 42wor32ds ~forty-two; fifty+and+one";
        ft_strcapitalize(str);
        write (1, str, 52);
        return (1);
}
*/
