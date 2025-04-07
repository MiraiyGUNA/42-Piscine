/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:50:39 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/05 18:52:46 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "MaxPayne";
	char	s2[] = "Max";

	printf("Minha Funcao:%d\n", ft_strcmp(s1, s2));
	printf("Funcao Original:%d\n", strcmp(s1, s2));
	return (0);
}
*/
