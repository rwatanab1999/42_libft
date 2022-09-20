/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 05:09:00 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:12:02 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
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

	ans1 = ft_isalpha(x);
	ans2 = isalpha(x);
	printf("入力した文字コードは、%d -> %c\n\n", x, x);

	printf(">ft_isalpha(%d)の結果\n", x);
	if (ans1 == 1)
		printf("%cはアルファベットです。\n", x);
	else
		printf("%cはアルファベットではないです。\n", x);

	printf(">isalpha(%d)の結果\n", x);
	if (ans1 > 0)
		printf("%cはアルファベットです。\n", x);
	else
		printf("%cはアルファベットではないです。\n", x);
}
*/