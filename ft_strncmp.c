/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:59:35 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/04 03:25:18 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
