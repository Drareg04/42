/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:16:16 by glorza-p          #+#    #+#             */
/*   Updated: 2024/12/05 15:48:03 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newfrase;

	i = 0;
	newfrase = 0;
	while (*(str + i) != '\0')
	{
		if (newfrase == 0 && *(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) -= 32;
			newfrase = 1;
		}
		else if (newfrase == 1 && *(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		else if (newfrase == 0 && (*(str + i) >= 48 && *(str + i) <= 57 \
				| *(str + i) >= 65 && *(str + i) <= 90))
			newfrase = 1;
		if (*(str + i) < 48 | *(str + i) > 57 \
				&& *(str + i) < 65 | *(str + i) > 90 \
				&& *(str + i) < 97 | *(str + i) > 122)
			newfrase = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "salUt, comment tu vas ? 42mOts QUARANTE-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return(0);
}*/
