/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:11:01 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/14 18:25:25 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// char	*ft_strcpy(char *dest, char *src);

// int	main(void)
// {
// 	char source[] = "Hello World!";
// 	char destination[20];
// 	char *returned_ptr;

// 	returned_ptr = ft_strcpy(destination, source);

// 	printf("Source: %s\n", source);
// 	printf("Destination: %s\n", destination);
// 	printf("Returned Pointer Address: %p\n", (void *)returned_ptr);
// 	printf("Destination Address:      %p\n", (void *)destination);
// 	return (0);
// }
