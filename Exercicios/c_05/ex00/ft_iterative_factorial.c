/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:53:10 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/09 16:05:36 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
/*
int	main(void)
{
	printf("Factorial de 1: %d\n", ft_iterative_factorial(1));
	printf("Factorial de -1: %d\n", ft_iterative_factorial(-1));
	printf("Factorial de 0: %d\n", ft_iterative_factorial(0));
	printf("Factorial de 5: %d\n", ft_iterative_factorial(5));
	return (0);
}
*/
