/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:18:06 by asokolov          #+#    #+#             */
/*   Updated: 2022/02/05 06:29:15 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long long i, int count, int ascii)
{
	unsigned long long		a;
	unsigned long long		r;

	a = i / 16;
	r = i % 16;
	if (a > 0 && a < 10)
	{
		count += ft_putchar(a + 48);
	}
	else if (a > 0)
	{
		count += ft_hex(a, count, ascii);
	}
	if (r > 9 && r <= 16)
	{
		ft_putchar(r + ascii);
	}
	if (r < 10)
	{
		ft_putchar(r + 48);
	}
	return (count);
}
