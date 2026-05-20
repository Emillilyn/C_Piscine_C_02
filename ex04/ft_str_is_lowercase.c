/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:20:44 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/20 11:51:30 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_string_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

static void	print_result(char *str, int result)
{
	write(1, "ft_str_is_lowercase(\"", 21);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	if (result == 1)
		write(1, "\") = 1\n", 7);
	else
		write(1, "\") = 0\n", 7);
}

// int	main(void)
// {
// 	int	res;

// 	res = ft_string_is_lowercase("hello");
// 	print_result("hello", res);
// 	res = ft_string_is_lowercase("Hello");
// 	print_result("Hello", res);
// 	res = ft_string_is_lowercase("");
// 	print_result("", res);
// 	res = ft_string_is_lowercase("abcxyz");
// 	print_result("abcxyz", res);
// 	res = ft_string_is_lowercase("abc123");
// 	print_result("abc123", res);
// 	res = ft_string_is_lowercase("lower_case");
// 	print_result("lower_case", res);
// 	return (0);
// }
