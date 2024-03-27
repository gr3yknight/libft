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

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;
	
	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		free (tmp);
		*lst = (*lst)->next;
	}
	free(*lst);
}
