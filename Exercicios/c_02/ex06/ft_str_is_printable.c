/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:41:31 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/03 12:28:56 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main (void)
{
	char str1[] = "The Tragedy of Man";
	int soMinusculas = ft_str_is_printable(str1);
	printf("String 1, foi Printavel?: %d\n", soMinusculas);

	char str2[] = "The Tragedy of Man \x01\x05\x0a\x15";
	int soMaiusculas = ft_str_is_printable(str2);
	printf("String 2, foi printavel?: %d\n", soMaiusculas);

	char str4[] = "";
	int	strVazia = ft_str_is_printable(str4);
	printf("String Vazia: %d\n", strVazia);
	return (0);
}
*/
