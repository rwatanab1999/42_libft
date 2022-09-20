/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 04:08:06 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 11:25:10 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (big == NULL && len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (j == ft_strlen(little) - 1)
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	a[100] = "0123456789apple56789";
	char	b[100] = "apple";
	char	test_a[100] = "";
	char	test_b[100] = "mmmmmmmmm";
	char	*c;
	char	*test1;
	char	*test2;

	c = ft_strnstr(a, b, 20);
	if (c != NULL)
	{
		printf("%sは文字列の%ld番目にあります。\n", b, (c - a));
		printf("以降の文字列は%sです。\n", c);
	}
	else
		printf("%sは見つかりませんでした\n", b);


	test1 = strnstr(NULL, "fake", 0);
	printf("strnstr : %s\n", test1);
	test2 = ft_strnstr(NULL, "fake", 0);
	printf("ft_strnstr : %s\n", test2);

	test1 = strnstr(test_b, test_a, strlen(test_a));
	printf("strnstr : %s\n", test1);
	test2 = ft_strnstr(test_b, test_a, strlen(test_a));
	printf("ft_strnstr : %s\n", test2);

	return (0);
}
*/