/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:22:13 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/04 15:19:45 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
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
	char str1[] = "thetragedyofman";
	int soMinusculas = ft_str_is_lowercase(str1);
	printf("letras MINUSCULAS: %d\n", soMinusculas);

	char str2[] = "THETRAGEDYOFMAN";
	int soMaiusculas = ft_str_is_lowercase(str2);
	printf("so letras MAIUSCULAS: %d\n", soMaiusculas);

	char str3[] = "TheTragedyofMan";
	int minusculasMaiusculas = ft_str_is_lowercase(str3);
	printf("letras MAIUSCULAS e MINUSCULAS: %d\n", minusculasMaiusculas);

	char str4[] = "";
	int	strVazia = ft_str_is_lowercase(str4);
	printf("String Vazia: %d\n", strVazia);
	return (0);
}
*/
