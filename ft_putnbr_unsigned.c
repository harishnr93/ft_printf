/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:29:46 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/06 12:39:52 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nr)
{
	int	cnt;

	cnt = 0;
	if (nr >= 10)
		cnt += ft_putnbr_unsigned(nr / 10);
	cnt += ft_putchar((nr % 10) + '0');
	return (cnt);
}
