/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioro2 <marioro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:57:29 by marioro2          #+#    #+#             */
/*   Updated: 2025/01/26 15:30:58 by marioro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_top_bottom_line(int i, int j, int x, int y);

void	ft_middle_line(int i, int x);

void	ft_putchar(char letter);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x < 0 || y < 0)
		return ;
	while (j <= y)
	{
		if (j == 1 || j == y)
			ft_top_bottom_line(i, j, x, y);
		else
			ft_middle_line(i, x);
		ft_putchar('\n');
		i = 1;
		j++;
	}
}

void	ft_top_bottom_line(int i, int j, int x, int y)
{
	while (i <= x)
	{
		if ((i == 1 && j == 1) || (i == x && j == y))
			ft_putchar('/');
		else if ((i == x && j == 1) || (i == 1 && j == y))
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void	ft_middle_line(int i, int x)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
}
