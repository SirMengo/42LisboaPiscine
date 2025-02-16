/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:03:16 by msimoes           #+#    #+#             */
/*   Updated: 2025/01/28 14:48:28 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	size--;
	while (i <= size)
	{
		while (j <= size)
		{
			if (tab[i] <= tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

// int main ()
// {
//     int i = 5;
//     int arr[] = {5, 46, 7, 10, 2};
//     ft_sort_int_tab(arr, i);
//     return 1;
// }