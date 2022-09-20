/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 05:36:12 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:11:42 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
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

	ans1 = ft_isalnum(x);
	ans2 = isalnum(x);
	printf("入力した文字コードは、%d -> %c\n\n", x, x);

	printf(">ft_isalnum(%d)の結果\n", x);
	if (ans1 == 1)
		printf("%cは英数字です。\n", x);
	else
		printf("%cは英数字ではないです。\n", x);

	printf(">isalnum(%d)の結果\n", x);
	if (ans1 > 0)
		printf("%cは英数字です。\n", x);
	else
		printf("%cは英数字ではないです。\n", x);
}
*/