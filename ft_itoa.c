/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 00:24:28 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:12:47 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_func(int n)
{
	int	count;

	if (n == INT_MIN)
		return (12);
	if (n == 0)
		return (2);
	count = 1;
	if (n < 0)
	{
		count ++;
		n = n * -1;
	}
	while (n)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

int	sign_func(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

static char	*intmin_func(char *str)
{
	ft_strlcpy(str, "-2147483648", 12);
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	*str;

	str = (char *) malloc(sizeof(char) * count_func(n));
	if (!str || n > INT_MAX)
		return (0);
	if (n == INT_MIN)
		return (intmin_func(str));
	i = count_func(n) - 1;
	str[i] = '\0';
	sign = sign_func(n);
	n = n * sign;
	while (--i > 0)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
	}
	if (sign == -1)
		str[i] = '-';
	else
		str[i] = n % 10 + 48;
	return (str);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		num1 = 1234;
	int		num2 = -1234;
	int		num3 = -2147483648;
	int		num4 = 1;

	str1 = ft_itoa(num1);
	str2 = ft_itoa(num2);
	str3 = ft_itoa(num3);
	str4 = ft_itoa(num4);
	printf("変換前 : %d , %d , %d , %d\n", num1, num2, num3, num4);
	printf("変換後 : %s , %s , %s , %s\n", str1, str2, str3, str4);
}
*/