/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:28:19 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/06 09:18:08 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write (1, &str, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar (argv[i][j]);
			j++;
		}
		j = 0;
		i--;
		write (1, "\n", 1);
	}
	return (0);
}
