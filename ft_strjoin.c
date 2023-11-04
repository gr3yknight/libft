/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:10:55 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 23:58:23 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len1;
	unsigned int	len2;
	unsigned int	len;
	char			*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = len1 + len2;
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (s1 == NULL && s2 == NULL)
		str = NULL;
	else if (s2 == NULL)
		str = (char *)ft_memcpy(str, s1, len1);
	else if (s1 == NULL)
		str = (char *)ft_memcpy(str, s2, len2);
	else
	{
		ft_memcpy(str, s1, len1);
		ft_memcpy(str + len1, s2, len2);
	}	
	str[len] = '\0';
	return (str);
}
