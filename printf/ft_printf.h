/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:04:15 by abostano          #+#    #+#             */
/*   Updated: 2023/11/07 18:44:39 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(const char *input, ...);
int				ft_printchar(int c);
int				ft_types(va_list args, const char str);
int				ft_printhex_low(unsigned int i);
int				ft_printhex_up(unsigned int i);
unsigned int	ft_unsigned(unsigned int i);
void			ft_putchar(char a);
int				ft_printstr(char *str);
int				ft_print_ptr(unsigned long long i);
int				ft_print_num(int i);
int				ft_printpercent(void);
char			*ft_itoa(int n);
size_t			ft_strlen(const char *a);

#endif