/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 18:12:32 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/23 18:15:37 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n, int uppercase)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += print_hex(n / 16, uppercase);
	c = "0123456789abcdef"[n % 16];
	if (uppercase)
		c = "0123456789ABCDEF"[n % 16];
	count += write(1, &c, 1);
	return (count);
}
