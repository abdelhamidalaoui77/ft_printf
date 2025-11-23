/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 10:20:44 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/23 18:22:03 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

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
			if (*str == 'c')
				count += print_char(va_arg(args, int));
			else if (*str == 's')
				count += print_str(va_arg(args, char *));
			else if (*str == 'p')
				count += print_ptr(va_arg(args, void *));
			else if (*str == 'd' || *str == 'i')
				count += print_nbr(va_arg(args, int));
			else if (*str == 'u')
				count += print_unsigned(va_arg(args, unsigned int));
			else if (*str == 'x')
				count += print_hex(va_arg(args, unsigned int), 0);
			else if (*str == 'X')
				count += print_hex(va_arg(args, unsigned int), 1);
			else if (*str == '%')
				count += print_char('%');
			else
				count += print_char(*str);
		}
		else
			count += print_char(*str);
		str++;
	}
	va_end(args);
	return (count);
}
/*
int	main()
{
	ft_printf("My name is %s and i am %d years old.\n","Abdelhamid", 24);
	char *s = "none";
	unsigned int x = 71477036;
	ft_printf("%s\n",s);
	ft_printf("%u\n",x);
	// printf("My name is %s and i am %d years old.","Abdelhamid", 24);
}*/