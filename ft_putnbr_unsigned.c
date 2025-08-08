/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:29:46 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/08 14:57:17 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nr)
{
	int	cnt;
	int	retval;

	cnt = 0;
	if (nr >= 10)
	{
		retval = ft_putnbr_unsigned(nr / 10);
		if (retval == -1)
			return (-1);
		cnt += retval;
	}
	retval = ft_putchar((nr % 10) + '0');
	if (retval == -1)
		return (-1);
	cnt += retval;
	return (cnt);
}
