/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 00:31:52 by daniel            #+#    #+#             */
/*   Updated: 2025/01/13 15:36:28 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nbr)
{
	char	result;
	int		count;

	count = 0;
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		count++;
		ft_printchar ('-');
		nbr = -nbr;
		count += ft_printnbr (nbr);
	}
	else
	{
		if (nbr > 9)
			count += ft_printnbr (nbr / 10);
		result = (nbr % 10) + '0';
		write (1, &result, 1);
		count++;
	}
	return (count);
}
