/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:54:08 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/08 14:57:21 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa_ptr(uintptr_t n)
{
	int		cnt;
	int		retval;
	char	*hexa_nr;

	cnt = 0;
	retval = 0;
	hexa_nr = "0123456789abcdef";
	if (n >= 16)
		cnt += ft_puthexa_ptr(n / 16);
	retval = ft_putchar(hexa_nr[n % 16]);
	if (retval == -1)
		return (-1);
	cnt += retval;
	return (cnt);
}

int	ft_putptr(void *ptr)
{
	int			cnt;
	int			retval;
	uintptr_t	addr;

	cnt = 0;
	retval = 0;
	if (!ptr)
	{
		cnt = write(1, NULLPTR, NULLPTR_SIZE);
		return (cnt);
	}
	addr = (uintptr_t)ptr;
	retval = write(1, "0x", 2);
	if (retval == -1)
		return (-1);
	cnt += retval;
	retval = ft_puthexa_ptr(addr);
	if (retval == -1)
		return (-1);
	cnt += retval;
	return (cnt);
}
