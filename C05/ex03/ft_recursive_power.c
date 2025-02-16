/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:20:34 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/05 09:46:25 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	sign;

	sign = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb < 0)
	{
		if (power % 2 != 0)
			sign = -1;
		nb = -nb;
	}
	return (sign * nb * ft_recursive_power(nb, power - 1));
}

// int main()
// {
//     printf("%d\n", ft_iterative_power(7,7));
// }