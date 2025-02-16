/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:22:52 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/02 16:15:46 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	orgsize;

	i = ft_strlen(dest);
	k = ft_strlen(src);
	orgsize = i;
	j = 0;
	if (nb < i)
		return (k + nb);
	while (src[j] != '\0' && i < nb - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (orgsize + k);
}

// int main()
// {
//     char a[50] = "Born to code";
//     char b[] = "1337 42";
//     unsigned int c = 20;
//     //ft_strlcat(a,b,c);
//     printf("%u", ft_strlcat(a,b,c));
//     printf("%s",a);
// }