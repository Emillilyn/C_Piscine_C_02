/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 19:56:06 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/20 17:10:57 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	char			src;
// 	char			dest[6];
// 	unsigned int	result;

// 	src = "Hello, World!";
// 	result = ft_strlcpy(dest, src, 6);
// 	printf("Source string: %s\n", src);
// 	printf("Copied string: %s\n", dest);
// 	printf("Total length of src: %u\n", result);
// 	return (0);
// }
