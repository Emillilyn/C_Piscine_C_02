/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:22:19 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/15 12:33:13 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "HELLOWORLD";
// 	char	str2[] = "123 ABC ABC !@#";
// 	char	str3[] = "";

// 	printf("Before: HELLO WORLD     | After: %s\n", ft_strlowcase(str1));
// 	printf("Before: 123!@# ABCdef   | After: %s\n", ft_strlowcase(str2));
// 	printf("Before: (empty)         | After: %s\n", ft_strlowcase(str3));
// 	return (0);
// }
