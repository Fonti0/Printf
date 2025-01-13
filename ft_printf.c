/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:50:50 by dfontive          #+#    #+#             */
/*   Updated: 2025/01/13 15:34:44 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printchar(va_arg(*args, int));
	if (c == 's')
		count += ft_printstr(va_arg(*args, char *));
	if (c == 'p')
		count += ft_printptr(va_arg(*args, unsigned long long));
	if (c == 'd' || c == 'i')
		count += ft_printnbr(va_arg(*args, int));
	if (c == 'u')
		count += ft_printunsigned(va_arg(*args, unsigned int));
	if (c == 'x')
		count += ft_printhex(va_arg(*args, unsigned int), 'x');
	if (c == 'X')
		count += ft_printhex(va_arg(*args, unsigned int), 'X');
	if (c == '%')
		count += ft_printchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] != '%')
			count += ft_printchar(format[i]);
		else
		{
			i++;
			count += ft_conversion(format[i], &args);
		}
		i++;
	}
	va_end(args);
	return (count);
}
