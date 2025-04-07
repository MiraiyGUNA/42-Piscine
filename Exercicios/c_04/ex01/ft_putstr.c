/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:13:00 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/05 13:20:39 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Parannoul";
	printf("String Printada da Main\n");
	printf("%s\n", str);
	printf("\n");
	printf("String Printada pela Minha Funcao: \n");
	ft_putstr(str);
	return (0);
}
*/
