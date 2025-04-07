/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:44:18 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/02 14:36:42 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "TESTE";
	char	src[] = "HighAndLow";
	int	n = 7;

	printf("Antes de chamar a funcao\n");
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("\n");
	ft_strncpy(dest, src, n);
	printf("Depois de chamar a funcao\n");
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("\n");
	return (0);
}
*/
