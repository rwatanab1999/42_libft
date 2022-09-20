/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 05:36:12 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:12:24 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	x = 50;
	int	ans1;
	int	ans2;

	ans1 = ft_isdigit(x);
	ans2 = isdigit(x);
	printf("入力した文字コードは、%d -> %c\n\n", x, x);

	printf(">ft_isdigit(%d)の結果\n", x);
	if (ans1 == 1)
		printf("%cは数字です。\n", x);
	else
		printf("%cは数字ではないです。\n", x);

	printf(">isdigit(%d)の結果\n", x);
	if (ans1 > 0)
		printf("%cは数字です。\n", x);
	else
		printf("%cは数字ではないです。\n", x);
}
*/