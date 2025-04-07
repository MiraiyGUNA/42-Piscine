/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:22:13 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/03 12:22:24 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char	str1[] = "The Tragedy of Man";
	int	soLetras = ft_str_is_numeric(str1);
	printf("soLetras entregou: %d\n", soLetras);
	char	str4[] = "1917";
	int	soNumeros = ft_str_is_numeric(str4);
	printf("soNumeros entregou: %d\n", soNumeros);

	char	str2[] = "2001: a space odyssey";
	int	temNumeros = ft_str_is_numeric(str2);
	printf("temNumeros entregou: %d\n", temNumeros);
	char	str3[] = "";
	int	vazia = ft_str_is_numeric(str3);
	printf("vazia entregou: %d\n", vazia);
;

	return (0);
}
*/
