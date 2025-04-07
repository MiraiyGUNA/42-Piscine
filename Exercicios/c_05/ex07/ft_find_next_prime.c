/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:49:45 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/10 15:23:56 by vde-maga         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("Proximo primo de 4? %d\n", ft_find_next_prime(4));
	printf("Proximo primo de 8? %d\n", ft_find_next_prime(8));
	printf("Proximo primo de 42? %d\n", ft_find_next_prime(42));
	printf("Proximo primo de -42? %d\n", ft_find_next_prime(-42));
	printf("Proximo primo de 2? %d\n", ft_find_next_prime(2));
}
*/
