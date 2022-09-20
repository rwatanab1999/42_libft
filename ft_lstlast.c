/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:16:03 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 03:53:35 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst;
	int		count;

	lst1 = ft_lstnew("hello1");
	lst2 = ft_lstnew("hello2");
	lst3 = ft_lstnew("hello3");
	lst1->next = lst2;
	lst2->next = lst3;
	lst = ft_lstlast(lst1);
	printf("%s\n", (char *)(lst->content));
	return (0);
}
*/