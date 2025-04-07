/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:32 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/01 15:18:47 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int	main(void)
{
	int	v1 = 42;
	int	v2 = 24;
	int	*a = &v1;
	int	*b = &v2;

	printf("Antes de Chamar a Funcao\n");
	printf("Endereco A: %p\n", a);
	printf("Valor A: %d\n", *a);
	printf("\n");
	printf("Endereco B: %p\n", b);
	printf("Valor B: %d\n", *b);
	printf("\n");
	printf("\n");
	ft_swap(a,b);
	printf("Depois de Chamar a Funcao\n");
	printf("Endereco A: %p\n", a);
	printf("Valor A: %d\n", *a);
	printf("Endereco B: %p\n", b);
	printf("Valor B: %d\n", *b);
	return (0);
}
*/
