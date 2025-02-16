/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:59:23 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/01 11:52:00 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d",ft_str_is_uppercase("aaaaaa"));
	printf("%d",ft_str_is_uppercase("AAAAAA"))
	printf("%d",ft_str_is_uppercase("444444"));
	printf("%d",ft_str_is_uppercase("4aAaaA4"));
	printf("%d",ft_str_is_uppercase(""));
}*/