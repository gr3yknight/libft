/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:55:01 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 17:56:49 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	str = (char *) src;
	i = 0;
	len = ft_strlen(str);
	if (size == 0)
		return (len);
	while (str[i] && i < size)
	{
		dest[i] = str[i];
		i++;
	}
	return (len);
}
