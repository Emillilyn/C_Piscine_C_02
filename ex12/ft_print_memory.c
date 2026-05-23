/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:57:56 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/21 14:41:15 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	print_hex_char(unsigned char c)
{
	char	hex[2];
	char	*base;

	base = "0123456789abcdef";
	hex[0] = base[(c >> 4) & 0xF];
	hex[1] = base[c & 0xF];
	write(1, hex, 2);
}

void	print_address(unsigned long addr)
{
	char	buf[16];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		buf[i] = base[addr & 0xF];
		addr >>= 4;
		i--;
	}
	write(1, buf, 16);
	write(1, ": ", 2);
}

void	print_hex_col(unsigned char *ptr, unsigned int size,
		unsigned int offset)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (offset + i < size)
			print_hex_char(ptr[offset + i]);
		else
			write(1, "  ", 2);
		i++;
		if (i % 2 == 0)
			write(1, " ", 1);
	}
}

void	print_char_col(unsigned char *ptr, unsigned int size,
		unsigned int offset)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < 16 && offset + i < size)
	{
		c = ptr[offset + i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	offset;

	if (size == 0)
		return (addr);
	ptr = (unsigned char *)addr;
	offset = 0;
	while (offset < size)
	{
		print_address((unsigned long)(ptr + offset));
		print_hex_col(ptr, size, offset);
		print_char_col(ptr, size, offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello 42 World!\nThis is ft_print_memory.\n\tTabs\tand\nnewlines!\0";
// 	ft_print_memory(str, 96);
// 	return (0);
// }
