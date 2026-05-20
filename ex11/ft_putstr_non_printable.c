/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:21:12 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/20 16:59:13 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	unsigned char	backlash;

	backlash = '\\';
	while (*str)
	{
		c = (unsigned char)*str;
		if (c >= 32 && c <= 126)
			write(1, str, 1);
		else
		{
			write(1, &backlash, 1);
			ft_put_hex((c >> 4) & 0xF);
			ft_put_hex(c & 0xF);
		}
		str++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Hello\nHow are you?\n");
	write(1, "\n", 1);
	ft_putstr_non_printable("Tab:\there\n");
	write(1, "\n", 1);
	ft_putstr_non_printable("Null in the middle: \0oooo\n");
	write(1, "\n", 1);
	ft_putstr_non_printable("Something\a and Something\033\n");
	write(1, "\n", 1);
	return (0);
}
