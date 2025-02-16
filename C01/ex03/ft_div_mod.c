/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:57:59 by msimoes           #+#    #+#             */
/*   Updated: 2025/01/28 14:59:12 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main()
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;
// 	a = 20;
// 	b = 10;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d",div);
// 	printf("%d",mod);
// }