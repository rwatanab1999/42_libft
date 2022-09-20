/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 06:13:49 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 12:31:11 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	b1[100] = "xxxxxxxxxxxxxxxxxxxx";
	char	b2[100] = "xxxxxxxxxxxxxxxxxxxx";
	int		plus;
	int		c;
	size_t	len;

	plus = 5;
	c = '0';
	len = 10;
	
	printf("memset(b1 + %d, %d, %lu)\n", plus, c, len);
	printf("実行前:%s\n", b1);
	memset(b1 + 5, c, len);
	printf("実行後:%s\n", b1);
	
	printf("ft_memset(b2 + %d, %d, %lu)\n", plus, c, len);
	printf("実行前:%s\n", b2);
	ft_memset(b2 + 5, c, len);
	printf("実行後:%s\n", b2);
}
*/