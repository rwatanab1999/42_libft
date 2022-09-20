/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 04:45:26 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 04:02:58 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	static char	dst[] = "xxxxx";
	static char	src[] = "demo";
	size_t		size;

	printf(">before\ndst : %s\nsrc : %s\n", dst, src);
	size = 5;
	ft_strlcpy(dst, src, size);
	printf(">after\ndst : %s\nsrc : %s\nsize : %zu\n", dst, src, size);
}
*/
