/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:50:50 by dfontive          #+#    #+#             */
/*   Updated: 2025/01/03 16:28:07 by daniel           ###   ########.fr       */
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
				int	c = va_arg (arg, int);
				c_putchar(c);
				i += 2;
			}
			if (format [i + 1] == 's')
			{
				char	*str = va_arg (arg, char *);
				s_putstr(str);
				i += 2;
			}
			if (format [i + 1] == 'p')
			{
				void	*ptr = va_arg (arg, void *);
				p_print_hex(ptr);
				i += 2;
			}
			if (format [i + 1] == 'd')
			{}
			if (format [i + 1] == 'i')
			{
				int	inbr = va_arg (arg, int);
				i_putnbr(inbr);
				i += 2;
			}
			if (format [i + 1] == 'u')
			{
				int unbr = va_arg (arg, int);
				u_putnbr(unbr);
				i += 2;
			}
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
	ft_printf("Hola, me llamo %s y tengo %c años", "123", 'a');
}