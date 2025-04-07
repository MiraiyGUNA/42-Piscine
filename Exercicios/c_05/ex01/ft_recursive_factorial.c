/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:21:11 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/08 14:57:26 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*
int	main(void)
{
	printf("Factorial de 1: %d\n", ft_recursive_factorial(1));
	printf("Factorial de -1: %d\n", ft_recursive_factorial(-1));
	printf("Factorial de 0: %d\n", ft_recursive_factorial(0));
	printf("Factorial de 5: %d\n", ft_recursive_factorial(5));
	return (0);
}
*/
