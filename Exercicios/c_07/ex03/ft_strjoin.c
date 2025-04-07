/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:37:48 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/12 14:42:19 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_all_lenghts(int size, char **strs, char *sep)
{
	int		i;
	int		result;
	char	*all_together;

	result = 0;
	i = 0;
	if (size <= 0)
	{
		result = 1;
	}
	else
	{
		while (i < size)
		{
			result = result + ft_strlen(strs[i]);
			i++;
		}
		result = result + ft_strlen(sep) * size - 1;
	}
	all_together = (char *) malloc(sizeof(char) * result);
	if (all_together == NULL)
	{
		return (0);
	}
	return (all_together);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*all_together;

	all_together = ft_all_lenghts(size, strs, sep);
	i = 0;
	c = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			all_together[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			all_together[c++] = sep[j++];
		}
		i++;
	}
	all_together[c] = '\0';
	return (all_together);
}
/*
int	main(void)
{
	char	*strs[] = {"Grand", "Theft", "Auto", "Vice", "City"};
	int	size = 5;
	char	*sep = " ";
	int	i = 0;
	char	*all_together = ft_strjoin(size, strs, sep);

	while (i < size)
	{
		printf("String no index %d: %s\n", i, strs[i]);
		i++;
	}
	printf("\n");
	printf("Nova String, que e todas juntas: %s\n", all_together);
	free(all_together);
	return (0);
}
*/
