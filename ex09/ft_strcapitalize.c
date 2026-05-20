/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:49:00 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/19 15:18:48 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0'
				&& str[i] <= '9'))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[30];
// 	char	*src;
// 	int		i;

// 	src = "hEllo, tHiS iS tesTinG fILe";
// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		str[i] = src[i];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	printf("Before: %s\n", str);
// 	ft_strcapitalize(str);
// 	printf("After : %s\n", str);
// 	return (0);
// }
