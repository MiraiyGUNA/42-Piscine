/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:38:47 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/05 16:35:02 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Max Payne";
	char	s2[] = "Max";
	unsigned int	n = 2;

	printf("Minha Funcao:%d\n", ft_strncmp(s1, s2, n));
	printf("Funcao Original:%d\n", strncmp(s1, s2, n));
	return (0);
}
*/
