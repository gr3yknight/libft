/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 07:37:41 by hatalhao          #+#    #+#             */
/*   Updated: 2024/03/26 08:08:27 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_clear(t_list **lst)
{
	t_list *tmp;
	
	tmp = *lst;
	*lst = (*lst)->next;
	free (tmp);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*iter;
	
	if (!lst || !*lst)
		return ;
	iter = *lst;
	while (iter)
	{
		ft_clear(&iter);
		iter = iter->next;
	}
	*lst = NULL;
}
