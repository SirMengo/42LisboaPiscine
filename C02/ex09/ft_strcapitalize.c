/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:11:46 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/01 11:55:39 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] > 'z' || (str[i - 1] < 'a' && str[i - 1] > 'Z')
			|| str[i - 1] < 'A')
			if (str[i - 1] < '0' || str[i - 1] > '9')
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			str[i + 1] = str[i + 1] + 32;
		i++;
	}
	return (str);
}
