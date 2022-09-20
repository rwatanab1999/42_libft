/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:36:15 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 21:42:56 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	space_func(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' \
											|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	minus_check(char c)
{
	if (c == '-')
	{
		return (45);
	}
	else if (c == '+')
	{
		return (43);
	}
	return (-1);
}

int	long_func(long num)
{
	long	x;

	x = num;
	x = x * 10;
	x = x / 10;
	if (num != x && x <= -1)
		return (-1);
	else
		return (1);
}

long	digit_convert(const char *str, int i, int sign)
{
	long	num;

	num = 0;
	while (ft_isdigit(str[i]))
	{
		if (long_func(num) == -1)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		if (num == 922337203685477580)
		{
			if ((num * 10 + (str[i] - '0')) <= -1)
			{
				if (sign == -1)
					return (0);
				return (-1);
			}
		}
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	while (space_func(str[i]))
		i++;
	if (minus_check(str[i]) > 0)
	{
		if (minus_check(str[i]) == 45)
			sign = -1;
		i++;
	}
	return (digit_convert(str, i, sign));
}
