/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:53:31 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/02 14:26:35 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "Dest";
	char	src[] = "Source";
	printf("Antes de chamar a funcao\n");
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("\n");
	ft_strcpy(dest, src);
	printf("Depois de chamar a funcao\n");
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("\n");
	return (0);
}
*/
