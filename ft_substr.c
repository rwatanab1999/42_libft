/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:57:49 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:14:58 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		str = (char *)malloc((ft_strlen(s) + 1) * sizeof(*s));
	else
		str = (char *)malloc((len + 1) * sizeof(*s));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
int	main(void)
{
	char	*s = "BONJOUR LES HARICOTS !";
	char	*str1;
	int		start = 8;
	size_t	len = 14;

	str1 = ft_substr(s, start, len);
	printf("%s\n", s);
	printf("%s\n", str1);
	return (0);
}
*/