/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:44:37 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 21:05:12 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	str = NULL;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j > i && ft_strchr(set, s1[j - 1]))
			j--;
		str = (char *) malloc(j - i + 1);
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
/*
int	main(void)
{
	char	*s1= "oykotxxxxxxxxtoo";
	char	*set = "tokyo";
	char	*str;

	str = ft_strtrim(s1, set);
	printf("%s\n", ft_strtrim(s1, set));
}
*/