/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 06:06:06 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:12:35 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c > 31 && c < 127))
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

	ans1 = ft_isprint(x);
	ans2 = isprint(x);
	printf("入力した文字コードは、%d -> %c\n\n", x, x);

	printf(">ft_isprint(%d)の結果\n", x);
	if (ans1 == 1)
		printf("%cは表示文字です。\n", x);
	else
		printf("%cは制御文字です。\n", x);

	printf(">isprint(%d)の結果\n", x);
	if (ans1 > 0)
		printf("%cは表示文字です。\n", x);
	else
		printf("%cは制御文字です。\n", x);
}
*/