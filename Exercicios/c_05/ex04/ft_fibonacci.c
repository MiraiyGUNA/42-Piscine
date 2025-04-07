/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:07:57 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/08 19:18:14 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("Fibonacci negativo é: %d\n", ft_fibonacci(-5));
	printf("Fibonacci de 0 é: %d\n", ft_fibonacci(0));
	printf("Fibonacci de 1 é: %d\n", ft_fibonacci(1));
	printf("Fibonacci de 2 é: %d\n", ft_fibonacci(2));
	printf("Fibonacci de 3 é: %d\n", ft_fibonacci(3));
	printf("Fibonacci de 4 é: %d\n", ft_fibonacci(4));
	printf("Fibonacci de 5 é: %d\n", ft_fibonacci(5));
	printf("Fibonacci de 6 é: %d\n", ft_fibonacci(6));
	printf("Fibonacci de 7 é: %d\n", ft_fibonacci(7));
	printf("Fibonacci de 8 é: %d\n", ft_fibonacci(8));
	printf("Fibonacci de 9 é: %d\n", ft_fibonacci(9));
	printf("Fibonacci de 10 é: %d\n", ft_fibonacci(10));
}
*/
