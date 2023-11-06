/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:13:15 by abostano          #+#    #+#             */
/*   Updated: 2023/11/06 17:53:55 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex_low(long int i)
{
	char	*lng;
	int	len;

	len = 0;
	lng = ft_long_int_to_hex_low(i);
	len += ft_printstr(lng);
	free(lng);
	return (len);
}

int	ft_printhex_up(long int i)
{
	char	*lng;
	int	len;

	len = 0;
	lng = ft_long_int_to_hex(i);
	len += ft_printstr(lng);
	free(lng);
	return (len);
}