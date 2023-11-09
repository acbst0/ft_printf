/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:35:47 by abostano          #+#    #+#             */
/*   Updated: 2023/11/07 11:56:22 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(int i)
{
	char	*num;
	int		len;

	num = ft_itoa(i);
	len = ft_printstr(num);
	free(num);
	return (len);
}
