/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:34:06 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 17:34:08 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL || src == NULL)
		return (NULL);
	unsigned int    i;
	char    *str1;
	char    *str2;

	str1 = (char *) src;
	str2 = (char *) dest;
	i = 0;
	if (str1 < str2 && str1 + n > str2)
	{
		while (str1[i] && i < n)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	else
		ft_memcpy(str2, str1, n);
	return (str2);
}
