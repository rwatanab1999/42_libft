/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:56:22 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 22:13:48 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;
	t_list	*lst;
	int		count;

	lst1 = ft_lstnew("hello1");
	lst2 = ft_lstnew("hello2");
	lst3 = ft_lstnew("hello3");
	lst4 = ft_lstnew("hello4");
	lst1->next = lst2;
	lst2->next = lst3;
	ft_lstadd_back(&lst1, lst4);
	lst = ft_lstlast(lst1);
	printf("%s\n", (char *)(lst->content));
	return (0);
}
*/