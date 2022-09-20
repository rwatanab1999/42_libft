/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:10:44 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 09:27:48 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}

/*
int	main(void)
{
	char	a[100] = "abcdefghijklmnopqrstuvwxyz";
	char	*b;
	int		c;

	printf("検索文字を入力してください。\n");
	c = getchar();
	b = ft_strchr(a, c);
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