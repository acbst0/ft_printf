/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:52:48 by abostano          #+#    #+#             */
/*   Updated: 2023/11/03 16:59:13 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(long int i)
{
	char	lng;
	int	len;

	len = ft_printstr("0x");
	lng = long_int_to_hex(i);
	len += ft_printstr(lng);
	free(lng);
	return (len);
}

void    ft_reverseit(char *s)
{
    size_t a;
    size_t b;
    char tmp;
    
    a = 0;
    b = strlen(s);
    while ((b / 2) > a)
    {
        tmp = s[a];
        s[a] = s[b - 1 - a];
        s[b - 1 - a] = tmp;
        a++;
    }
}

char *long_int_to_hex(long int num)
{
	char hex_digits[] = "0123456789ABCDEF";
	char *hex_str = malloc(sizeof(char) * 16);
	
	int i = 0;
	while (num > 0)
	{
		hex_str[i++] = hex_digits[num % 16];
		num /= 16;
	}
	ft_reverseit(hex_str);
	return (hex_str);
}