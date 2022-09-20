/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 06:01:32 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:12:14 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c < 128))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	x = 63;
	int	ans1;
	int	ans2;

	ans1 = ft_isascii(x);
	ans2 = isascii(x);
	printf("入力した文字コードは、%d -> %c\n\n", x, x);

	printf(">ft_isascii(%d)の結果\n", x);
	if (ans1 == 1)
		printf("%cはASCIIです。\n", x);
	else
		printf("%cはASCIIではないです。\n", x);

	printf(">isascii(%d)の結果\n", x);
	if (ans1 > 0)
		printf("%cはASCIIです。\n", x);
	else
		printf("%cはASCIIではないです。\n", x);
}
*/