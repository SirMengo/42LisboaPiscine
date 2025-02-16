/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:11:31 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/09 12:26:48 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(src);
	str = malloc(sizeof(char) * i);
	j = 0;
	while (src[j] != '\0')
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
