/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 07:55:43 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 03:55:20 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	a[100] = "0123456789";
	char	*b;
	int		c;
	size_t	n;

	printf("検索文字を入力してください。\n");
	c = getchar();
	n = 10;
	b = ft_memchr(a, c, n);

	if (b != NULL)
	{
		printf("%cは文字列の%ld番目にあります。\n", c, (b - a));
		printf("以降の文字列は%sです。\n", b);
	}
	else
		printf("%cは見つかりませんでした\n", c);
	return (0);
}
*/