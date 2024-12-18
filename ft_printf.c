/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:50:50 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/18 20:19:04 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		x;
	va_list	arg;

	i = 0;
	x = 0;
	va_start (arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char c = va_arg (arg, char);
				c_putchar(c);
				i += 2;
			}
			if (format [i + 1] == 's')
			{}
			if (format [i + 1] == 'p')
			{}
			if (format [i + 1] == 'd')
			{}
			if (format [i + 1] == 'i')
			{}
			if (format [i + 1] == 'u')
			{}
			if (format [i + 1] == 'x')
			{}
			if (format [i + 1] == 'X')
			{}
			if (format [i + 1] == '%')
			{}
		}
		write(1, &format[i], 1);
		i++;
	}
	return (i + x);
}

int	main(void)
{
	ft_printf("Hola, me llamo %d y tengo %s años", 343, "Lola");
}