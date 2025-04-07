/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:33:54 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/08 15:01:16 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Potencia de 2 em -1: %d\n", ft_iterative_power(2, -1));
	printf("Potencia de 2 em 2: %d\n", ft_iterative_power(2, 2));
	printf("Potencia de 3 em 1: %d\n", ft_iterative_power(3, 1));
	printf("Potencia de -3 em 3: %d\n", ft_iterative_power(-3, 3));
	return (0);
}
*/
