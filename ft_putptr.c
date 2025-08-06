/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:54:08 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/06 12:29:36 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa_ptr(uintptr_t n)
{
	int		cnt;
	char	*hexa_nr;

	cnt = 0;
	hexa_nr = "0123456789abcdef";
	if (n >= 16)
		cnt += ft_puthexa_ptr(n / 16);
	cnt += ft_putchar(hexa_nr[n % 16]);
	return (cnt);
}

int	ft_putptr(void *ptr)
{
	int			cnt;
	uintptr_t	addr;

	cnt = 0;
	if (!ptr)
	{
		cnt = write(1, NULLPTR, NULLPTR_SIZE);
		return (cnt);
	}
	addr = (uintptr_t)ptr;
	cnt += write(1, "0x", 2);
	cnt += ft_puthexa_ptr(addr);
	return (cnt);
}
