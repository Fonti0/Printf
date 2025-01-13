/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:49:45 by dfontive          #+#    #+#             */
/*   Updated: 2025/01/13 15:36:13 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		ft_printstr("(nil)");
		return (5);
	}
	else
	{
		count += ft_printstr ("0x");
		count += ft_printhex(ptr, 'x');
	}
	return (count);
}
