/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:35:32 by msimoes           #+#    #+#             */
/*   Updated: 2025/01/26 13:33:37 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_two_numbers(int i, int j)
{
	ft_putchar (i / 10 + 48);
	ft_putchar (i % 10 + 48);
	ft_putchar (' ');
	ft_putchar (j / 10 + 48);
	ft_putchar (j % 10 + 48);
	if (i == 98 && j == 99)
		return ;
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_two_numbers (a, b);
			b++;
		}
		a++;
	}
}

// int main()
// {
// 	ft_print_comb2();
// }