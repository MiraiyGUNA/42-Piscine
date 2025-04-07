/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:18:19 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/08 19:07:59 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	length;

	i = 1;
	length = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[length][j] != '\0')
		{
			ft_putchar(argv[length][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		length--;
	}
}
