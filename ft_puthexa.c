/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:43:04 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/08 14:57:15 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char format)
{
	int		cnt;
	int		retval;
	char	*hex_digits;

	cnt = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
	{
		retval = ft_puthexa(n / 16, format);
		if (retval == -1)
			return (-1);
		cnt += retval;
	}
	retval = ft_putchar(hex_digits[n % 16]);
	if (retval == -1)
		return (-1);
	cnt += retval;
	return (cnt);
}
