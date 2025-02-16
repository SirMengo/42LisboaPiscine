/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:09:45 by msimoes           #+#    #+#             */
/*   Updated: 2025/01/26 13:32:54 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_numbers(char j, char k, char l)
{
	ft_putchar(j);
	ft_putchar(k);
	ft_putchar(l);
	if (j == '7' && k == '8' && l == '9')
		return ;
	write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (c != b && c != a && b != a)
					ft_write_numbers (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

// int main(void)
// {
// 	ft_print_comb();
// }
