/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:30:37 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/02 08:55:04 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

// int main()
// {
//     char a[] = "aaaaa";
//     char b[] = "bbbbb";
//     char c[] = "aaacc";
//     printf("%d \n", ft_strncmp(a,b,3));
//     printf("%d \n", ft_strncmp(a,a,3));
//     printf("%d \n", ft_strncmp(b,a,6));
//     printf("%d \n", ft_strncmp(a,c,6));
//     printf("%d \n", ft_strncmp(a,c,3));
// }