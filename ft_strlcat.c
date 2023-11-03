/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:50:20 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 17:53:54 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	tlen;
	unsigned int	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	if (size == 0)
		tlen = slen;
	else if (size < dlen)
	{
		tlen = slen + size;
	}
	else if (size > dlen)
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
