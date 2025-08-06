/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:59:09 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/06 12:39:59 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nr;
	int		cnt;

	cnt = 0;
	nr = n;
	if (nr < 0)
	{
		cnt += ft_putchar('-');
		nr *= -1;
	}
	if (nr >= 10)
		cnt += ft_putnbr(nr / 10);
	cnt += ft_putchar((nr % 10) + '0');
	return (cnt);
}
