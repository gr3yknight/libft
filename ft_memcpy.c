/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:29:38 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/05 04:51:41 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (dest == src)
		return (dest);
	str1 = (unsigned char *) src;
	str2 = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dest);
}
