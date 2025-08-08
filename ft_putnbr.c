/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:59:09 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/08 14:57:19 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nr;
	int		cnt;
	int		res;

	res = 0;
	cnt = 0;
	nr = n;
	if (nr < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		nr *= -1;
		cnt++;
	}
	if (nr >= 10)
	{
		res = ft_putnbr(nr / 10);
		if (res == -1)
			return (-1);
		cnt += res;
	}
	if (ft_putchar((nr % 10) + '0') == -1)
		return (-1);
	return (cnt + 1);
}
