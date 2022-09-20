/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 02:29:23 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 21:16:32 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = (char *) malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	demo(unsigned int i, char str)
{
	char	ans;

	ans = str + 1;
	return (ans);
}

int	main(void)
{
	char	str[100] = "abc";
	char	*ans;
	unsigned int i = 0;

	ans = ft_strmapi(str, demo);
	printf("処理前 : %s\n", str);	
	printf("処理後 : %s\n", ans);
	return (0);
}
*/