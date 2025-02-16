/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:11:54 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/09 12:29:47 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*arr;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	else
		range = max - min;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// int        main(void)
// {
//     int *res;
//     int i;
//     i = 0;
//     res = ft_range(-10, 100);
//     while (i < 110)
//     {
//         printf("%d ", res[i]);
//         i++;
//     }
//     printf("\n");
// }