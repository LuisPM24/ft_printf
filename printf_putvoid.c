/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putvoid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:12:25 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/28 12:12:35 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	hex_converter(char *buffer, unsigned long ptr)
{
	char	*hex_digits;
	int		cont_hex;
	int		cont;

	hex_digits = "0123456789abcdef";
	cont_hex = 17;
	cont = 2;
	buffer[0] = '0';
	buffer[1] = 'x';
	if (!ptr)
	{
		buffer[2] = '0';
		buffer[3] = '\0';
		return ;
	}
	while (ptr > 0)
	{
		buffer[cont_hex--] = hex_digits[ptr % 16];
		ptr /= 16;
		cont++;
	}
	while (cont_hex > 1)
	{
		buffer[cont_hex--] = '0';
		cont++;
	}
	buffer[cont] = '\0';
}

void	printf_putvoid(void *ptr, int *printed)
{
	char	buffer[18];

	ft_bzero(buffer, 18);
	hex_converter(buffer, (unsigned long)ptr);
	printf_putstr(buffer, printed);
}

