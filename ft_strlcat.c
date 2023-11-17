/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:50:20 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/04 21:55:59 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	tlen;
	size_t	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	if (size == 0)
		tlen = slen;
	else if (size < dlen)
	{
		tlen = slen + size;
	}
	else
	{
		while (src[i] && (i + dlen) < size - 1)
		{
			dest[i + dlen] = src[i];
			i++;
		}
		dest[i + dlen] = '\0';
		tlen = dlen + slen;
	}
	return (tlen);
}
