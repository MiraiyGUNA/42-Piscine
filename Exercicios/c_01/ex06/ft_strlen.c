/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:00:09 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/01 15:20:50 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Bottles on The Table!";
	int	print = ft_strlen(str);
	printf("Numeros de Chars no Array: %d", print);
	return (0);
}
*/
