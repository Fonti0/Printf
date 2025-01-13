/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:20:36 by daniel            #+#    #+#             */
/*   Updated: 2025/01/13 14:44:27 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_conversion(char c, va_list *args);
int	ft_printchar(char c);
int	ft_printhex(unsigned long long nbr, char c);
int	ft_printnbr(int nbr);
int	ft_printptr(unsigned long long ptr);
int	ft_printstr(char *str);
int	ft_printunsigned(unsigned int nbr);

#endif