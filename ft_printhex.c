/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:20:36 by daniel            #+#    #+#             */
/*   Updated: 2025/01/13 15:36:49 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long nbr, char c)
{
	unsigned long long	count;

	count = 0;
	if (nbr >= 16)
		count += ft_printhex(nbr / 16, c);
	if (c == 'x')
	{
		ft_printchar("0123456789abcdef"[nbr % 16]);
		count++;
	}
	else if (c == 'X')
	{
		ft_printchar("0123456789ABCDEF"[nbr % 16]);
		count++;
	}
	return (count);
}
