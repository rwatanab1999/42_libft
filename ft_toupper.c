/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:48:01 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:15:03 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}
/*
int	main(void)
{
	char	c1 = 'A';
	char	c2 = 'a';
	char	r1;
	char	r2;

	r1 = toupper(c1);
	printf("r1 = toupper(A)\n");
	printf("r1 : %c\n", r1);
	r1 = ft_toupper(c1);
	printf("r2 = ft_toupper(A)\n");
	printf("r2 : %c\n\n", r1);
	r2 = toupper(c2);
	printf("r1 = toupper(a)\n");
	printf("r1 : %c\n", r2);
	r2 = ft_toupper(c2);
	printf("r2 = ft_toupper(a)\n");
	printf("r2 : %c\n", r2);
}
*/