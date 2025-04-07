/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:12:18 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/01 17:36:02 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	swap = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[8] = {7, 3, 2, 9, 1, 0, 4, 5};
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
