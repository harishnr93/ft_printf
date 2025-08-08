/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:53:51 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/08 14:57:23 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	retval;
	int	cnt;

	retval = 0;
	cnt = 0;
	if (!str)
	{
		retval = write(1, "(null)", 6);
		return (retval);
	}
	while (str[cnt])
	{
		retval = write(1, &str[cnt], 1);
		if (retval == -1)
			return (-1);
		cnt += retval;
	}
	return (cnt);
}
