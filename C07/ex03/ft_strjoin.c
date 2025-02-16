/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:04:37 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/09 16:28:24 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_arrlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
		i = i + ft_strlen(strs[j++]);
	k = ft_strlen(sep);
	i = i + ((size - 1) * k) + 1;
	return (i);
}

char	*ft_alloc(int size, char **strs, char *sep)
{
	int		i;
	char	*alloc;

	i = ft_arrlen(size, strs, sep);
	alloc = malloc(sizeof(char) * i);
	if (alloc == NULL)
		return (0);
	return (alloc);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*c;

	c = ft_alloc(size, strs, sep);
	if (size == 0)
    {
        c = (char *)malloc(sizeof(char));
        c[0] = '\0';
        return c; 
    }
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			c[k++] = strs[i][j++];
		l = 0;
		while (sep[l] != '\0' && i < size - 1)
			c[k++] = sep[l++];
		i++;
	}
	c[k] = '\0';
	return (c);
}

int main(int argc, char *argv[])
{
    char sep[] = " Sep ";	 
    printf("%s", ft_strjoin((argc - 1), &argv[1], sep));
}