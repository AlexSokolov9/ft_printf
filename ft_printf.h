/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:26:11 by asokolov          #+#    #+#             */
/*   Updated: 2022/02/05 06:29:00 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int			ft_printf(const char *s, ...);
int			ft_putchar(char c);
size_t		ft_strlen(const char *s);
int			ft_putstr(char *s);
int			ft_putnbr(long n, int count);
int			ft_hex(unsigned long long i, int count, int ascii);

#endif
