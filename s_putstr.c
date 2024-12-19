/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_putstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:55:37 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/19 14:58:39 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	s_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

/* int	main(void)
{
	s_putstr("hello, my name is");
} */