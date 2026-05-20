/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:39:22 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/15 11:48:26 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;
// 	char	*test5;

// 	test1 = "Hello! 123";
// 	test2 = "Line\nBreak";
// 	test3 = "Tab\tSpace";
// 	test4 = "";
// 	test5 = "Special: \x07";
// 	printf("Test 1 (Printable): %d\n", ft_str_is_printable(test1));
// 	printf("Test 2 (Newline):   %d\n", ft_str_is_printable(test2));
// 	printf("Test 3 (Tab):       %d\n", ft_str_is_printable(test3));
// 	printf("Test 4 (Empty):     %d\n", ft_str_is_printable(test4));
// 	printf("Test 5 (Control):   %d\n", ft_str_is_printable(test5));
// 	return (0);
// }
