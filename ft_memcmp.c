/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 07:29:46 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 03:55:36 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[100] = "0123456789";
	char	s2[100] = "Z123456789";
	size_t	n;

	n = 10;

	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);
	printf("memcmp(s1, s2, %lu) = %d\n", n, memcmp(s1, s2, n));
	printf("ft_memcmp(s1, s2, %lu) = %d\n", n, ft_memcmp(s1, s2, n));
}
*/