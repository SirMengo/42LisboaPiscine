/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:27:12 by msimoes           #+#    #+#             */
/*   Updated: 2025/02/05 10:10:00 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb <= 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// int main ()
// {
// 	printf("%d\n", ft_is_prime(6));
// 	printf("%d\n", ft_is_prime(3));
// 	printf("%d\n", ft_is_prime(0));
// }