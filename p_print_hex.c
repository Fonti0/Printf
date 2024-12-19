/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_print_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:49:45 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/19 18:41:07 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	p_print_hex(void *ptr)
{
	char		*hex_digits;
	char		buffer[16];
	int			i;
	uintptr_t	addr;

	i = 14;
	hex_digits = "0123456789abcdef";
	addr = (uintptr_t)ptr;
	while (i >= 0)
	{
		buffer[i] = hex_digits[addr & 0xF];
		addr >>= 4;
		i--;
	}
	write (1, "0x", 2);
	write (1, buffer, 16);
}

/* int	main(void)
{
	void *ptr = "hello";
	p_print_hex(ptr);
} */