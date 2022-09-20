/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:15:09 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 20:27:46 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	a[100] = "123456789";
	char	*b;
	int		c;

	printf("検索文字を入力してください。\n");
	c = getchar();
	b = ft_strrchr(a, c);
	if (b != NULL)
	{
		printf("%cが最後に現れるのは、文字列の%ld番目です。\n", c, (b - a));
		printf("以降の文字列は%sです。\n", b);
	}
	else
		printf("%cは見つかりませんでした\n", c);
	return (0);
}
*/