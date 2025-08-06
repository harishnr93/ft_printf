/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:19:26 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/06 14:00:16 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(char format, va_list args)
{
	int	cnt;

	cnt = 0;
	if (format == 'c')
		cnt += ft_putchar(va_arg(args, int));
	else if (format == 's')
		cnt += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		cnt += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		cnt += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		cnt += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		cnt += ft_puthexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		cnt += ft_putchar('%');
	else
		cnt += ft_putchar(format);
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		cnt;
	va_list	args;

	i = 0;
	cnt = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
		cnt = process_format(format, &i, args);
	va_end(args);
	return (cnt);
}

int	process_format(const char *format, int *i, va_list args)
{
	int	cnt;

	if (format[*i] == '%' && format[*i + 1])
	{
		cnt += ft_format_handler(format[*i + 1], args);
		*i += 2;
	}
	else if (format[*i] == '%' && !format[*i + 1])
		break ;
	else
	{
		cnt += ft_putchar(format[*i]);
		*i++;
	}
	return (cnt);
}

// int	main(void)
// {
// 	int		a;
// 	char	*b;

// 	a = 10;
// 	b = "Hello";
// 	ft_printf("This is %d", a);
// 	return (1);
// }
