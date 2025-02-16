/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:16:36 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/01 11:53:00 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {
//     printf("%d",ft_str_is_printable("aaaaaa"));
//     printf("%d",ft_str_is_printable("AAAAAA"))
//     printf("%d",ft_str_is_printable("444444"));
//     printf("%d",ft_str_is_printable("4aAaaA4"));
//     printf("%d",ft_str_is_printable(" "));
// }