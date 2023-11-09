/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:13:15 by abostano          #+#    #+#             */
/*   Updated: 2023/11/09 13:54:53 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char str)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, str);
		ft_put_hex(num % 16, str);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (str == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (str == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char str)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, str);
	return (ft_hex_len(num));
}
