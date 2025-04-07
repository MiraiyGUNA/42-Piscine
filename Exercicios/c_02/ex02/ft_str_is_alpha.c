/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:22:13 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/04 13:41:00 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "WindRises";
	int	soLetras = ft_str_is_alpha(str1);
	printf("soLetras entregou: %d\n", soLetras);
	char	str2[] = "2001:aspaceodyssey";
	int	temNumeros = ft_str_is_alpha(str2);
	printf("temNumeros entregou: %d\n", temNumeros);
	char	str3[] = "";
	int	vazia = ft_str_is_alpha(str3);
	printf("vazia entregou: %d\n", vazia);
;

	return (0);
}
*/
