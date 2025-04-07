/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:17:01 by vde-maga          #+#    #+#             */
/*   Updated: 2025/03/01 11:47:21 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int return_number)
{
	if (return_number >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-10);
	ft_is_negative(10);
	return (0);
}
*/
