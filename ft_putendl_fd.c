/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 05:11:31 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 21:54:53 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	ft_putchar_fd('\n', fd);
}

/*
int	main(void)
{
	int		fd = 1;
	char	s[100] = "abcdef";

	ft_putendl_fd(s, fd);
	return (0);
}
*/