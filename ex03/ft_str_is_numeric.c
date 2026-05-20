/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:10:17 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/15 11:19:00 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str1 = "1234567890";
// 	str2 = "123abcd123";
// 	str3 = "";
// 	printf("Testing \"%s\": %d\n", str1, ft_str_is_numeric(str1));
// 	printf("Testing \"%s\": %d\n", str2, ft_str_is_numeric(str2));
// 	printf("Testing empty string: %d\n", ft_str_is_numeric(str3));
// 	return (0);
// }
