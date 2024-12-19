/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_putnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:20:11 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/19 18:41:41 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	d_putnbr(int nbr)
{
	char	result;

	if (nbr == -2147483648)
		write (1, "-2147483648", 11);
	else if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
		d_putnbr (nbr);
	}
	else
	{
		if (nbr > 9)
			d_putnbr (nbr / 10);
		result = (nbr % 10) + '0';
		write (1, &result, 1);
	}
}

/* int	main(void)
{
	d_putnbr(2222222222);
} */