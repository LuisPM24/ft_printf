/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:45:51 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/27 11:45:54 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

static void select_type(char s)
{
	
}

int ft_printf(char const *str, ...)
{
	va_list	args;
	int	cont;

	va_start(args, str);
	cont = 0;
	while(str)
	{
		if (str[cont] == '%')
		{
			cont++;
			select_type(str[cont]);
		}
		else
			write(1, str[cont], 1);
		cont++;
	}
	va_end(args);
	return (cont);
}
