/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:40:16 by dfontive          #+#    #+#             */
/*   Updated: 2025/01/03 16:27:27 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

void	c_putchar(char c);
void	s_putstr(char *str);
void	p_print_hex(void *ptr);
void	i_putnbr(int nbr);
void	u_putnbr(int nb);

#endif