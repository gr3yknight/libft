/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:59:35 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 18:01:50 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				t;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		t = s1[i] - s2[i];
		if (t == 0)
			i++;
		else
			break ;
	}
	return (t);
}
