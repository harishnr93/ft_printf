/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu_22 <ubuntu_22@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:43:04 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/06 20:32:58 by ubuntu_22        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char format)
{
	int		cnt;
	char	*hex_digits;

	cnt = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		cnt += ft_puthexa(n / 16, format);
	cnt += ft_putchar(hex_digits[n % 16]);
	return (cnt);
}
