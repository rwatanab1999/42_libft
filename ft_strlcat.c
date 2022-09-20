/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 05:35:04 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 01:21:10 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	size_t			val1 = 0;
	size_t			val2 = 0;
	size_t			dstsize = 7;
	char			dst[7] = "ABCDE";
	char			ft_dst[7] = "ABCDE";
	char			src[6] = "12345";
	
	int a = -1;
	size_t	b = a;

	printf("%zu\n", b);

	printf("dst : %s\nsrc : %s\ndstsize : %lu\n\n", dst, src, dstsize);

	val1 = strlcat(dst, src, dstsize);
	printf("> strlcat(dst, src, dstsize)\n");
	printf("dst : %s\n", dst);
	printf("return : %lu\n\n", val1);

	val2 = ft_strlcat(ft_dst, src, dstsize);
	printf("> ft_strlcat(dst, src, dstsize)\n");
	printf("dst : %s\n", ft_dst);
	printf("return : %lu\n\n", val2);

	val1 = 0;
	val1 = strlcat(NULL, src, 0);
	printf("> strlcat(NULL, src, 0)\n");
	printf("return : %lu\n\n", val1);

	val2 = 0;
	val2 = ft_strlcat(NULL, src, 0);
	printf("> ft_strlcat(NULL, src, 0)\n");
	printf("return : %lu\n", val2);

	return (0);
}
*/