/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:41:59 by abostano          #+#    #+#             */
/*   Updated: 2023/10/31 14:38:55 by abostano         ###   ########.fr       */
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
			len += 
		}
		else
			ft_printchar(input[a]);
	}
	
	va_end(arg);
}