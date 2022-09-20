/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 01:28:16 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 21:40:53 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		i;
	char		**array;

	if (s == NULL)
		return (NULL);
	array = (char **) malloc((count(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		len = 0;
		while (*s != '\0' && *s != c)
		{
			s++;
			len++;
		}
		if (*(s - 1) != c)
			array[i++] = ft_substr(s - len, 0, len);
	}
	array[i] = 0;
	return (array);
}
/*
int	main(void)
{
	char *s = "      split       this for   me  !       ";
	char c = ' ';
	char **array;
	int i;
	int j;

	array = ft_split(s, c);
	i = 0;
	while (i < count(s, c) + 1)
	{
		printf("%d>%s\n", i, array[i]);
		i++;
	}
	return (0);
}
*/