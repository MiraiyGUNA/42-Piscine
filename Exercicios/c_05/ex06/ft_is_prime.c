/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:21:24 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/08 19:14:34 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("42 é primo? %d\n", ft_is_prime(42));
	printf("-42 é primo? %d\n", ft_is_prime(-42));
	printf("2 é primo? %d\n", ft_is_prime(2));
	printf("3 é primo? %d\n", ft_is_prime(3));
	printf("5 é primo? %d\n", ft_is_prime(5));
	printf("6 é primo? %d\n", ft_is_prime(6));
	printf("23 é primo? %d\n", ft_is_prime(23));
}
*/
