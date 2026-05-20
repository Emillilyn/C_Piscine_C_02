/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:19:36 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/15 12:20:34 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char test1[] = "hello world";
// 	char test2[] = "123 abc ABC !@#";
// 	char test3[] = "";

// 	printf("Test 1: %s\n", ft_strupcase(test1));
// 	printf("Test 2: %s\n", ft_strupcase(test2));
// 	printf("Test 3: [%s]\n", ft_strupcase(test3));
// 	return (0);
// }
