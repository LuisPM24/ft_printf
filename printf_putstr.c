/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:20:04 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/28 11:20:05 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_putstr(char *str, int *printed)
{
	unsigned int	count;

	count = 0;
	if (*str == '\0')
		return ;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
		(*printed)++;
	}
}
