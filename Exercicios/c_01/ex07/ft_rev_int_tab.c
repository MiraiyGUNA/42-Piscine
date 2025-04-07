/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:12:18 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/01 17:34:48 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size];
		tab[size] = swap;
		i++;
		size--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	size = 8;
	int	i = 0;
	int	j = 0;

	printf("array ANTES da Funcao\n");
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	printf("array DEPOIS da Funcao\n");
	while (j < size)
	{
		printf("%d\n", tab[j]);
		j++;
	}
	return (0);
}
*/
