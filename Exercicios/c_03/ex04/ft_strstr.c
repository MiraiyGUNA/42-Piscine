/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:03:28 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/05 18:54:29 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *str = "Lara Croft: Tomb Raider (2013)";
	char *to_find = "Tomb";

	printf("String Original: %s\n", str);
	printf("O que Encontrar: %s\n", to_find);
	printf("\n");
	printf("Funcao Original\n");
	printf("Encontrado: %s\n", strstr(str, to_find));
	printf("\n");
	printf("A Minha Funcao\n");
	printf("Encontrado: %s\n", ft_strstr(str, to_find));
}
*/
