/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:54:58 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/03 12:23:18 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char fraseMaiuscula[] = "THE MAN WHO STOLE THE SUN";

	printf("Antes da Funcao: %s\n", fraseMaiuscula);
	printf("Depois da Funcao: %s\n", ft_strlowcase(fraseMaiuscula));
	return (0);
}
*/
