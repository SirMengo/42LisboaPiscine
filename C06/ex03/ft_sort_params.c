/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:28:22 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/06 09:29:32 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		count1;
	int		count2;
	char	*temp;

	count1 = 1;
	count2 = 1;
	while (count1 < argc)
	{
		count2 = count1 + 1;
		while (count2 < argc)
		{
			if (ft_strcmp(argv[count1], argv[count2]) > 0)
			{
				temp = argv[count1];
				argv[count1] = argv[count2];
				argv[count2] = temp;
			}
			count2++;
		}
		count2 = 0;
		ft_putstr (argv[count1]);
		write (1, "\n", 1);
		count1++;
	}
	return (0);
}
