/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 10:20:44 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/24 16:41:52 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_check(char c, va_list args)
{
	int	printed_count;

	printed_count = 0;
	if (c == 'c')
		printed_count += print_char(va_arg(args, int));
	else if (c == 's')
		printed_count += print_str(va_arg(args, char *));
	else if (c == 'p')
		printed_count += print_ptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		printed_count += print_nbr(va_arg(args, int));
	else if (c == 'u')
		printed_count += print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		printed_count += print_hex(va_arg(args, unsigned int), 0);
	else if (c == 'X')
		printed_count += print_hex(va_arg(args, unsigned int), 1);
	else if (c == '%')
		printed_count += print_char('%');
	else
		printed_count += print_char(c);
	return (printed_count);
}

static int	is_valid_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X'
		|| c == '%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	if (!str)
		return (0);
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			if (is_valid_specifier(*str))
				count += print_check(*str, args);
			else
				count += print_char('%');
		}
		else if (*str != '%')
			count += print_char(*str);
		str++;
	}
	va_end(args);
	return (count);
}
