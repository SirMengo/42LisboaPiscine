/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:46:05 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/01 11:50:12 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

// int main()
// {
//     printf("%d",ft_str_is_numeric("AAAAAA"));
//     printf("%d",ft_str_is_numeric("444444"));
//     printf("%d",ft_str_is_numeric("4aAaaA4"));
//     printf("%d",ft_str_is_numeric(" "));
// }