/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:07:42 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 21:04:12 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc(len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, len);
	return (str);
}
/*
int	main(void)
{
	char	s1[6] = "ABCDE";
	char	s2[6] = "12345";
	char	*str;

	printf("s1 : %s\ns2 : %s\n\n", s1, s2);

	str = ft_strjoin(s1, s2);
	printf("> ft_strjoin(s1, s2)\n");
	printf("return : %s\n\n", str);
	return (0);
}
*/
