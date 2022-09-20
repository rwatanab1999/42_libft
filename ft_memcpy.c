/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 07:13:25 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 01:00:18 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char	dst1[100] = "xxxxxxxxxxxxxxxxxxxx";
	char	dst2[100] = "xxxxxxxxxxxxxxxxxxxx";
	char	src[100] = "1234567890";
	int		plus;
	size_t	n;

	plus = 5;
	n = 7;
	
	printf("memcpy(dst1 + %d, %s, %lu)\n", plus, src, n);
	printf("実行前:%s\n", dst1);
	memcpy(dst1 + plus, src, n);
	printf("実行後:%s\n", dst1);
	
	printf("ft_memcpy(dst2 + %d, %s, %lu)\n", plus, src, n);
	printf("実行前:%s\n", dst2);
	ft_memcpy(dst2 + plus, src, n);
	printf("実行後:%s\n", dst2);
}
*/