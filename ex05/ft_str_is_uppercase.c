/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:55:01 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/20 16:55:53 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

static void	write_digit(int n)
{
	char	c;

	if (n < 0)
		n = -n;
	c = (char)('0' + (n % 10));
	write(1, &c, 1);
}

static void	print_case(int idx, char *s, int res)
{
	int	i;

	write(1, "case ", 5);
	write_digit(idx);
	write(1, ": \"", 3);
	if (s)
	{
		i = 0;
		while (s[i])
			i++;
		write(1, s, i);
	}
	write(1, "\" -> ", 5);
	write_digit(res);
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	char	empty[] = "";
// 	char	up1[] = "ABC";
// 	char	up2[] = "XYZT";
// 	char	low[] = "abc";
// 	char	mix1[] = "AbC";
// 	char	num[] = "ABC123";
// 	char	sym[] = "ABC!";
// 	char	space[] = "ABC DEF";

// 	print_case(1, empty, ft_str_is_uppercase(empty));
// 	print_case(2, up1, ft_str_is_uppercase(up1));
// 	print_case(3, up2, ft_str_is_uppercase(up2));
// 	print_case(4, low, ft_str_is_uppercase(low));
// 	print_case(5, mix1, ft_str_is_uppercase(mix1));
// 	print_case(6, num, ft_str_is_uppercase(num));
// 	print_case(7, sym, ft_str_is_uppercase(sym));
// 	print_case(8, space, ft_str_is_uppercase(space));
// 	return (0);
// }
