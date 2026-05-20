/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 10:51:45 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/15 11:07:04 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	str1 = "Hello42";
// 	str2 = "OnlyAlphabetical";
// 	str3 = "";
// 	str4 = "Spaces are not alphabetical";
// 	printf("Test 1 (\"%s\"): %d (expected: 0)\n", str1, ft_str_is_alpha(str1));
// 	printf("Test 2 (\"%s\"): %d (expected: 1)\n", str2, ft_str_is_alpha(str2));
// 	printf("Test 3 (\"%s\"): %d (expected: 1)\n", str3, ft_str_is_alpha(str3));
// 	printf("Test 4 (\"%s\"): %d (expected: 0)\n", str4, ft_str_is_alpha(str4));
// }
