/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:52:48 by abostano          #+#    #+#             */
/*   Updated: 2023/11/06 18:09:31 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(long int i)
{
	char	*lng;
	int		len;

	len = ft_printstr("0x");
	lng = ft_long_int_to_hex_low(i);
	len += ft_printstr(lng);
	free(lng);
	return (len);
}

void	ft_reverseit(char *s)
{
	size_t	a;
	size_t	b;
	char	tmp;
    
	a = 0;
	b = ft_strlen(s);
	while ((b / 2) > a)
	{
		tmp = s[a];
		s[a] = s[b - 1 - a];
		s[b - 1 - a] = tmp;
		a++;
	}
}

char	*ft_long_int_to_hex(long int num)
{
	char	*hex_digits;
	char	*hex_str;
	int	i;
	
	hex_str = malloc(sizeof(char) * 16);
	*hex_digits = "0123456789ABCDEF";
	i = 0;
	while (num > 0)
	{
		hex_str[i++] = hex_digits[num % 16];
		num /= 16;
	}
	ft_reverseit(hex_str);
	return (hex_str);
}

char *ft_long_int_to_hex_low(long int num)
{
	char	*hex_digits;
	char	*hex_str;
	int	i;
	
	hex_str = malloc(sizeof(char) * 16);
	*hex_digits = "0123456789abcdef";
	i = 0;
	while (num > 0)
	{
		hex_str[i++] = hex_digits[num % 16];
		num /= 16;
	}
	ft_reverseit(hex_str);
	return (hex_str);
}