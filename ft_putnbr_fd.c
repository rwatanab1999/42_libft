/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 05:29:25 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/19 08:32:42 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	num;

	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb == INT_MIN)
	{
		write(fd, "2147483648", 11);
		return ;
	}
	if (nb < 10)
	{
		num = '0' + nb;
		write(fd, &num, 1);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
/*
int	main(void)
{
	int	fd = 1;
	int	num = INT_MIN;

	ft_putnbr_fd(num, fd);
	return (0);
}
*/