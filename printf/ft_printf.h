/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:04:15 by abostano          #+#    #+#             */
/*   Updated: 2023/11/06 18:04:51 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int				ft_printf(const char *input, ...);
int				ft_printchar(int c);
int				ft_types(va_list args, const char *str);
int				ft_printhex_low(long int i);
int				ft_printhex_up(long int i);
unsigned int	ft_unsigned(unsigned int i);
void			ft_putchar(char a);
int				ft_printstr(char *str);
int				ft_print_ptr(long int i);
void   			ft_reverseit(char *s);
char			*ft_long_int_to_hex(long int num);
char 			*ft_long_int_to_hex_low(long int num);
int				ft_print_num(int i);

#endif