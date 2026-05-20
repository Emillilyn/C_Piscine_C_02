/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 18:57:40 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/14 18:10:44 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	char	source[] = "Hello";
// 	char	dest1[10] = "XXXXXXXXXX";
// 	char	dest2[10] = "XXXXXXXXXX";

// 	ft_strncpy(dest1, source, 8);
// 	printf("Case 1 (n=8): %s\n", dest1);
// 	if (dest1[7] == '\0')
// 		printf("Padding succesful.\n");
// 	ft_strncpy(dest2, source, 3);
// 	printf("Case 2 (n=3): %.3s (Not Null-terminated)\n", dest2);
// 	return (0);
// }
