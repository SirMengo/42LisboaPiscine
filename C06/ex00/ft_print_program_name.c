/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:41:48 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/06 08:58:20 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc <= 1)
	{
		while (argv[0][i] != '\0')
		{
			write (1, &argv[0][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
