/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 03:34:08 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 21:17:42 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	demo(unsigned int i, char *str)
{
	if ((i % 2) == 0)
		*str = 'o';
	else
		*str = 'x';
}
int	main(void)
{
	char	str[100] = "abcde";

	printf("処理前 : %s\n", str);
	ft_striteri(str, demo);
	printf("処理後 : %s\n", str);
	return (0);
}
*/
