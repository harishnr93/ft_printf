/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:44:58 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/08 14:57:10 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

# if defined(__APPLE__)
#  define NULLPTR "0x0"
#  define NULLPTR_SIZE 3
# elif defined(__linux__)
#  define NULLPTR "(nil)"
#  define NULLPTR_SIZE 5
# endif

int	ft_strlen(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_puthexa(unsigned int n, char format);
int	ft_putnbr_unsigned(unsigned int nr);
int	ft_putptr(void *ptr);
int	ft_format_handler(char format, va_list args);
int	ft_printf(const char *format, ...);

#endif