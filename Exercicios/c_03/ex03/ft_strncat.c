/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:10:18 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/05 18:29:01 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Half-";
	char	dest2[] = "Half-";
	char	src[] = "Life: Opossing Force";
	unsigned int	nb = 4;

	printf("Minha Funcao: %s\n", ft_strncat(dest, src, nb));
	printf("Funcao Original: %s\n", strncat(dest2, src, nb));
	return (0);
}
*/
