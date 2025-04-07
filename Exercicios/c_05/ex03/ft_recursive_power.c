/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:01:29 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/09 16:24:38 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, --power));
	}
}
/*
int	main(void)
{
	printf("2 elevado a -1 potencia = %d\n", ft_recursive_power(2, -1));
	printf("0 elevado a 0 = %d\n", ft_recursive_power(0, 0));
	printf("3 elevado a potencia de 1 = %d\n", ft_recursive_power(3, 1));
	printf("3 elevado a potencia de 3 = %d\n", ft_recursive_power(3, 3));
}
*/
