/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:55:01 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/21 14:33:42 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	ft_putstr("uppercase: ");
// 	if (ft_str_is_uppercase("ABCDEF"))
// 		ft_putstr("1\n");
// 	else
// 		ft_putstr("0\n");
// 	ft_putstr("lowercase: ");
// 	if (ft_str_is_uppercase("ABCdEF"))
// 		ft_putstr("1\n");
// 	else
// 		ft_putstr("0\n");
// 	ft_putstr("empty: ");
// 	if (ft_str_is_uppercase(""))
// 		ft_putstr("1\n");
// 	else
// 		ft_putstr("0\n");
// 	return (0);
// }
