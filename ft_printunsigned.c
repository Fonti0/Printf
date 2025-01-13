/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:36:25 by dfontive          #+#    #+#             */
/*   Updated: 2025/01/13 15:36:38 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int nbr)
{
	int		count;
	char	result;

	count = 0;
	if (nbr > 9)
		count += ft_printunsigned(nbr / 10);
	result = (nbr % 10) + '0';
	write (1, &result, 1);
	count++;
	return (count);
}
