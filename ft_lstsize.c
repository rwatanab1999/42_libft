/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:55:06 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 03:54:49 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count ++;
		lst = lst->next;
	}
	return (count);
}

/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	int		count;

	lst1 = ft_lstnew("hello1");
	lst2 = ft_lstnew("hello2");
	lst3 = ft_lstnew("hello3");
	lst1->next = lst2;
	lst2->next = lst3;
	count = ft_lstsize(lst1);
	printf("%d\n", count);
}
*/