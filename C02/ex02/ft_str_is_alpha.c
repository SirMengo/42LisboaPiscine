/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:04:25 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/01 11:49:10 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {
//     printf("%d",ft_str_is_alpha("AAAAAA"));
//     printf("%d",ft_str_is_alpha("444444"));
//     printf("%d",ft_str_is_alpha("4aAaaA4"));
//     printf("%d",ft_str_is_alpha(" "));
//     printf("%d",ft_str_is_alpha(""));
// }