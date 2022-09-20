/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:45:32 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:11:28 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((void *) s, 0, (size_t) n);
}

/*
int	main(void)
{
	char	dst1[100] = "0123456789abc";
	char	dst2[100] = "0123456789abc";
	size_t	n;

	n = 3;

	printf("bzero(dst1 + 10, %lu)\n", n);
	printf("実行前:%s\n", dst1);
	bzero(dst1 + 10, n);
	printf("実行後:%s\n", dst1);

	printf("ft_bzero(dst2 + 10, %lu)\n", n);
	printf("実行前:%s\n", dst2);
	ft_bzero(dst2 + 10, n);
	printf("実行後:%s\n", dst2);
}
*/