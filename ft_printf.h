/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:54:04 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/29 11:54:16 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# include <stdio.h>

int		ft_printf(char const *str, ...);
void	printf_putchar(char c, int *printed);
void	printf_putnbr(int nb, int *printed);
void	printf_putstr(char *str, int *printed);
void	printf_putvoid(void *ptr, int *printed);
void	printf_putunsig(unsigned int nb, int *printed);
void	printf_puthex(unsigned int nb, int *printed);
void	printf_putupphex(unsigned int nb, int *printed);

#endif