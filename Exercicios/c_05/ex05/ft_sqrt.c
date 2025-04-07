/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:13:51 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/08 19:14:10 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	printf("Raiz Quadrada de 0: %d\n", ft_sqrt(0));
	printf("Raiz Quadrada de 2: %d\n", ft_sqrt(2));
	printf("Raiz Quadrada de -2: %d\n", ft_sqrt(-2));
	printf("Raiz Quadrada de 42: %d\n", ft_sqrt(42));
	printf("Raiz Quadrada de 81: %d\n", ft_sqrt(81));
	printf("Raiz Quadrada de 64: %d\n", ft_sqrt(64));
	printf("Raiz Quadrada de 256: %d\n", ft_sqrt(256));
	return (0);

}
*/
