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

#include "ft_printf.h"

static void select_type(char s, va_list args, int *printed)
{
	if (s == 'c')
		printf_putchar((char)va_arg(args, int), printed);
	else if (s == 's')
		printf_putstr(va_arg(args, char *), printed);
	else if (s == 'p')
		printf_putvoid(va_arg(args, void *), printed);
	else if (s == 'd')
		printf_putdec(va_arg(args, void *), printed);
	else if (s == 'i')
		printf_putnbr(va_arg(args, int), printed);
}

int ft_printf(char const *str, ...)
{
	va_list	args;
	int		cont;
	int 	printed;

	va_start(args, str);
	cont = 0;
	printed = 0;
	while(str[cont])
	{
		if (str[cont] == '%' && str[cont + 1] != '\0')
		{
			cont++;
			select_type(str[cont], args, &printed);
		}
		else
			printf_putchar(str[cont], &printed);
		cont++;
	}
	va_end(args);
	return (printed);
}
