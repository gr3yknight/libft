/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:09:31 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 18:10:51 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		l;

	p = (char *)s;
	l = ft_strlen(p) - 1;
	i = l;
	while (s[i])
	{
		if (s[i] == c)
			return (p + i);
		i--;
	}
	return (0);
}
