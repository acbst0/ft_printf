/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:41:59 by abostano          #+#    #+#             */
/*   Updated: 2023/11/06 17:11:10 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_types(va_list args, const char *str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_printchar(va_arg(args, char));
	else if (str == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (str == 'p')
		len += ft_print_ptr(va_arg(args, long int));
	else if (str == 'd' || str == 'i')
		len += ft_print_num(va_arg(args, int));
	else if (str == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (str == 'x')
		len += ft_printhex_low(va_arg(args, int));
	else if (str == 'X')
		len += ft_printhex_up(va_arg(args, int));
}

int	ft_printf(const char *input, ...)
{
	char	*res;
	int	a;
	int	len;

	a = 0;
	len = 0;
	va_list arg;
	va_start(arg, input);
	while (input[a])
	{
		if (input[a] == '%')
		{
			len += ft_types(arg, input[a + 1]);
			a++;
		}
		else
			len += ft_printchar(input[a]);
		a++;
	}
	va_end(arg);
}