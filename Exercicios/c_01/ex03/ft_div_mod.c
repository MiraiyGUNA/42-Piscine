/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:18:34 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/01 15:19:06 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 5;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Valor de A = %d \n Valor de B = %d", a, b);
	printf("\n");
	printf("Divisao = %d\n", div);
	printf("Resto = %d\n", mod);
	return (0);
}
*/
