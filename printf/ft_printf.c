/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:41:59 by abostano          #+#    #+#             */
/*   Updated: 2023/11/09 13:50:18 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_types(va_list args, const char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (str == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (str == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long int));
	else if (str == 'd' || str == 'i')
		len += ft_print_num(va_arg(args, int));
	else if (str == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), str);
	else if (str == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *input, ...)
{
	int		a;
	int		len;
	va_list	arg;

	va_start(arg, input);
	a = 0;
	len = 0;
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
	return (len);
}
