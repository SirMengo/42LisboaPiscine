/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:49:20 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/01 11:50:57 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d",ft_str_is_lowercase("aaaaaa"));
	printf("%d",ft_str_is_lowercase("AAAAAA"))
	printf("%d",ft_str_is_lowercase("444444"));
	printf("%d",ft_str_is_lowercase("4aAaaA4"));
	printf("%d",ft_str_is_lowercase(""));
}*/