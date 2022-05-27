/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:29:57 by asokolov          #+#    #+#             */
/*   Updated: 2022/02/21 21:31:16 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choice(char c, va_list list)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int), 1));
	else if (c == 'u')
		return (ft_putnbr(va_arg(list, unsigned int), 1));
	else if (c == 'x')
		return (ft_hex(va_arg(list, unsigned int), 1, 87));
	else if (c == 'X')
		return (ft_hex(va_arg(list, unsigned int), 1, 55));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (2 + ft_hex(va_arg(list, unsigned long long), 1, 87));
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int			i;
	int			count;
	va_list		list;

	va_start(list, s);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1])
		{
			count += ft_choice(s[i + 1], list);
			i++;
		}
		else if (s[i] != '%')
		{
			ft_putchar(s[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
