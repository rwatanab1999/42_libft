/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:12:08 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 20:44:02 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;
	size_t		j;

	d = dst;
	s = src;
	if (s == d || n == 0)
		return (dst);
	if (d > s && d - s < (int)n)
	{
		i = n;
		while (--i >= 0)
			d[i] = s[i];
		return (dst);
	}
	if (s > d && s - d < (int)n)
	{
		j = 0;
		while (++j - 1 < n)
			d[j - 1] = s[j - 1];
		return (dst);
	}
	ft_memcpy(dst, src, n);
	return (dst);
}
/*
int	main(void)
{
	char	dst1[100] = "ABCDEFGH";
	char	dst2[100] = "ABCDEFGH";
	//char	src[100] = "1234567890";
	int		plus;
	size_t	n;

	plus = 3;
	n = 3;
	
	printf("memcpy(dst1 + %d, dst1, %lu)\n", plus, n);
	printf("実行前:%s\n", dst1);
	memmove(dst1+2, dst1, n);
	printf("実行後:%s\n", dst1);
	
	printf("ft_memcpy(dst2 + %d, dst2, %lu)\n", plus, n);
	printf("実行前:%s\n", dst2);
	ft_memmove(dst2+2, dst2, n);
	printf("実行後:%s\n", dst2);
}
*/