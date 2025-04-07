/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:00:46 by vde-maga          #+#    #+#             */
/*   Updated: 2025/02/25 17:51:29 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char fst, char snd, char trd)
{
	write(1, &fst, 1);
	write(1, &snd, 1);
	write(1, &trd, 1);
	if (fst == '7' && snd == '8' && trd == '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	fst;
	char	snd;
	char	trd;

	fst = '0';
	while (fst <= '7')
	{
		snd = fst + 1;
		while (snd <= '8')
		{
			trd = snd + 1;
			while (trd <= '9')
			{
				ft_print(fst, snd, trd);
				trd++;
			}
			snd++;
		}
		fst++;
	}
}

int	main(void)
{
	ft_print_comb();
}
