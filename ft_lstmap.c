/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:58:57 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/18 03:53:50 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
	{
		ft_lstclear(&new, del);
		return (0);
	}
	(new)->next = ft_lstmap(lst->next, f, del);
	return (new);
}
