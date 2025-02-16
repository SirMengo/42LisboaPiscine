/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:35:32 by msimoes           #+#    #+#             */
/*   Updated: 2025/01/28 17:34:34 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// int main()
// {
//     int size;
//     size =10;   
//     int tab[size];
//     int i;
//     for(i = 0; i < size; i++)
//     {
//     tab[i] = i;
//     }
//     ft_rev_int_tab(tab, size);
//     i=0;
//     while(i<size)
//     {
//         printf("%d", tab[i]);
//         i++;
//     }
//     return 0;
// }