/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:02:45 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/01 15:19:28 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	v1 = 15;
	int	v2 = 5;
	int	*a = &v1;
	int	*b = &v2;

	printf("Antes de Chamar a Funcao");
	printf("Pointer a = %p\n", a);
	printf("Valor a = %d\n", *a);
	printf("Pointer b = %p\n", b);
	printf("Valor b = %d\n", *b);
	printf("\n");
	ft_ultimate_div_mod(a, b);
	printf("Funcao Chamada");
	printf("Pointer a = %p\n", a);
	printf("Valor a = %d\n", *a);
	printf("Pointer b = %p\n", b);
	printf("Valor b = %d\n", *b);
	printf("\n");
	return (0);
}
*/
