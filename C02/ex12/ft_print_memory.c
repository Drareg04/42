/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelorza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:29:32 by gelorza           #+#    #+#             */
/*   Updated: 2026/10/21 18:09:17 by gelorza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nhex(long h, int n)
{
	if (n > 1)
		put_nhex (h / 16, n - 1);
	write (1, &"0123456789abcdef"[h % 16], 1);
}

void	put_text(unsigned char *text, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (size > i)
	{
		if (text[i] < 32 || text[i] > 126)
		{
			write (1, ".", 1);
		}
		else
			write (1, (text + i), 1);
		i++;
	}
}

void	putmiddle(unsigned int cline, unsigned char *letter, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (size > cline + i)
			put_nhex (letter[i + cline], 2);
		if (size <= cline + i)
			write (1, "  ", 2);
		if (i % 2 != 0)
			write (1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	cline;
	unsigned char	*letter;

	letter = (unsigned char *)addr;
	if (size <= 0)
		return (addr);
	cline = 0;
	while (size > cline)
	{
		put_nhex ((long)addr + cline, 16);
		write (1, ": ", 2);
		putmiddle (cline, letter, size);
		if (cline + 16 < size)
		{
			put_text (letter + cline, 16);
		}
		else
			put_text (letter + cline, size - cline);
		cline += 16;
		write (1, "\n", 1);
	}
	return (addr);
}
/*
int main(void)
{
	ft_print_memory("Bonjour les aminches\0\0\0c\0 est fou\0.
	tout\0ce qu onpeut faire avec\xff\0\0print
	_memory\0\0\0lol\0lol\0 \0", 92);
	ft_print_memory("", 0);
}
*/
