/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:31:43 by hnataraj          #+#    #+#             */
/*   Updated: 2025/08/08 14:57:28 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int		num;
// 	char	*str;
// 	void	*ptr;

// 	num = 42;
// 	str = "Hello World";
// 	ptr = &num;
// 	int ret1, ret2;
// 	printf("=== BASIC TESTS ===\n");
// 	printf("Original printf:\n");
// 	ret1 = printf("Char: %c, String: %s, Ptr: %p\n", 'A', str, ptr);
// 	printf("Return value: %d\n", ret1);
// 	printf("\nft_printf:\n");
// 	ret2 = ft_printf("Char: %c, String: %s, Ptr: %p\n", 'A', str, ptr);
// 	ft_printf("Return value: %d\n", ret2);
// 	printf("\n=== NUMBER TESTS ===\n");
// 	printf("Original: d=%d, i=%d, u=%u, x=%x, X=%X\n", -42, 42, 3000000000U,
// 		255, 255);
// 	ft_printf("ft_printf: d=%d, i=%d, u=%u, x=%x, X=%X\n", -42, 42, 3000000000U,
// 		255, 255);
// 	printf("\n=== EDGE CASES ===\n");
// 	printf("Original: INT_MIN=%d, INT_MAX=%d\n", INT_MIN, INT_MAX);
// 	ft_printf("ft_printf: INT_MIN=%d, INT_MAX=%d\n", INT_MIN, INT_MAX);
// 	printf("Original: NULL string: '%s'\n", (char *)NULL);
// 	ft_printf("ft_printf: NULL string: '%s'\n", (char *)NULL);
// 	printf("Original: NULL pointer: %p\n", (void *)NULL);
// 	ft_printf("ft_printf: NULL pointer: %p\n", (void *)NULL);
// 	printf("\n=== PERCENT TESTS ===\n");
// 	printf("Original: 100%% complete\n");
// 	ft_printf("ft_printf: 100%% complete\n");
// 	printf("\n=== PLATFORM INFO ===\n");
// 	printf("sizeof(void*): %zu bytes\n", sizeof(void *));
// 	printf("sizeof(uintptr_t): %zu bytes\n", sizeof(uintptr_t));
// #ifdef __APPLE__
// 	printf("Platform: macOS\n");
// #elif __linux__
// 	printf("Platform: Linux\n");
// #else
// 	printf("Platform: Unknown\n");
// #endif
// 	return (0);
// }
