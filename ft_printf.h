/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:24:43 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/25 11:45:02 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	print_char(char c);
int	print_str(char *s);
int	print_nbr(int n);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned long n, int uppercase);
int	print_ptr(void *ptr);
int	ft_printf(const char *str, ...);

#endif
