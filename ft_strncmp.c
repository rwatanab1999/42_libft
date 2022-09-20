/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:18:44 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 04:04:12 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cmp_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (cmp_char(s1[i], s2[i]) != 0)
			return (cmp_char(s1[i], s2[i]));
		i++;
	}
	if (i < n)
		return (cmp_char(s1[i], s2[i]));
	return (0);
}

/*
int	main(void)
{
	static char	s1[] = "tanakc";
	static char	s2[] = "tanaka";

	printf("ft_strncmp(s1, s2, 6) : return %d\n", ft_strncmp(s1, s2, 6));
	printf("strncmp(s1, s2, 6) : return %d\n", strncmp(s1, s2, 6));
	printf("ft_strncmp(s1, s2, 5) : return %d\n", ft_strncmp(s1, s2, 5));
	printf("strncmp(s1, s2, 5) : return %d\n", strncmp(s1, s2, 5));
}
*/
