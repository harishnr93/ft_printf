/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu_22 <ubuntu_22@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:19:26 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/06 20:35:23 by ubuntu_22        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_input_processor(const char *format, va_list args)
{
	int	i;
	int	cnt;
	int	retval;

	i = 0;
	cnt = 0;
	retval = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			retval = ft_format_handler(format[i + 1], args);
			i += 2;
		}
		else if (format[i] == '%' && !format[i + 1])
			break ;
		else
			retval = ft_putchar(format[i++]);
		if (retval == -1)
			return (-1);
		else
			cnt += retval;
	}
	return (cnt);
}

int	ft_format_handler(char format, va_list args)
{
	int	cnt;
	int	retval;

	cnt = 0;
	retval = 0;
	if (format == 'c')
		retval = ft_putchar(va_arg(args, int));
	else if (format == 's')
		retval = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		retval = ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		retval = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		retval = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		retval = ft_puthexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		retval = ft_putchar('%');
	else
		retval = ft_putchar(format);
	if (retval == -1)
		return (-1);
	return (cnt + retval);
}

int	ft_printf(const char *format, ...)
{
	int		result;
	va_list	args;

	result = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	result = ft_input_processor(format, args);
	va_end(args);
	return (result);
}
