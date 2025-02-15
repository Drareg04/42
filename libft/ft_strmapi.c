/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:12:40 by glorza-p          #+#    #+#             */
/*   Updated: 2025/02/07 13:26:47 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*t;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	t = malloc(l * sizeof(char) + 1);
	if (!t)
		return (NULL);
	i = -1;
	while (l > ++i)
		t[i] = (*f)(i, s[i]);
	t[i] = '\0';
	return (t);
}
