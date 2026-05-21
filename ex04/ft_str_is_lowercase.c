/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:20:44 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/21 14:33:27 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
} */

// int	main(void)
// {
// 	ft_putstr("lowercase: ");
// 	if (ft_str_is_lowercase("abcdef"))
// 		ft_putstr("1\n");
// 	else
// 		ft_putstr("0\n");
// 	ft_putstr("uppercase: ");
// 	if (ft_str_is_lowercase("abcDef"))
// 		ft_putstr("1\n");
// 	else
// 		ft_putstr("0\n");
// 	ft_putstr("empty: ");
// 	if (ft_str_is_lowercase(""))
// 		ft_putstr("1\n");
// 	else
// 		ft_putstr("0\n");
// 	return (0);
// }
