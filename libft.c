/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:28:32 by asokolov          #+#    #+#             */
/*   Updated: 2022/02/21 20:59:49 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

int	ft_putstr(char *s)
{
	if (s == NULL)
		s = "(null)";
	write(1, &(*s), ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putnbr(long n, int count)
{
	if (n < 0)
	{
		ft_putchar('-');
		count += ft_putnbr(n * (-1), count);
	}
	else if (n >= 0 && n < 10)
	{
		ft_putchar(n + 48);
	}
	else
	{
		count += ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	return (count);
}
