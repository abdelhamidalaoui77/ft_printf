/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 10:20:44 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/27 21:31:58 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_zero(char c)
{
	if (c == '0')
		return (1);
	return (0);
}

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
	return (printed_count);
}

static int	is_valid_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X'
		|| c == '%');
}

static int	write_character_after_percent(char c)
{
	int	count;

	count = 0;
	count += print_char('%');
	count += print_char(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	if (!str)
		return (-1);
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			if (is_valid_specifier(*str))
				count += print_check(*str, args);
			else if (is_zero(*str))
				count = count - 1;
			else
				count += write_character_after_percent(*str);
		}
		else if (*str != '%')
			count += print_char(*str);
		str++;
	}
	va_end(args);
	return (count);
}
