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

#include <unistd.h>

static void	print_hex_addr(unsigned long addr)
{
	char	*hex;
	char	buf[16];
	int		i;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		buf[i] = hex[addr & 0xf];
		addr >>= 4;
		i--;
	}
	write(1, buf, 16);
	write(1, ": ", 2);
}

static void	print_hex_col(unsigned char *ptr, unsigned int row_len)
{
	char			*hex;
	unsigned int	j;

	hex = "0123456789abcdef";
	j = 0;
	while (j < 16)
	{
		if (j < row_len)
		{
			write(1, &hex[ptr[j] >> 4], 1);
			write(1, &hex[ptr[j] & 0xf], 1);
		}
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

static void	print_ascii_col(unsigned char *ptr, unsigned int row_len)
{
	unsigned int	j;

	j = 0;
	while (j < row_len)
	{
		if (ptr[j] >= 32 && ptr[j] < 127)
			write(1, &ptr[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	row_len;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_hex_addr((unsigned long)(ptr + i));
		if (size - i < 16)
			row_len = size - i;
		else
			row_len = 16;
		print_hex_col(ptr + i, row_len);
		print_ascii_col(ptr + i, row_len);
		i += 16;
	}
	return (addr);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello 42 World!\nThis is ft_print_memory.\n\tTabs\tand\nnewlines!\0";
// 	ft_print_memory(str, strlen(str) + 4);
// 	return (0);
// }

