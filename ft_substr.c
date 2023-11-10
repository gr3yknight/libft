/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:17:30 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 18:20:09 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	if (start >= ft_strlen(s) || ft_strncmp(s, "", 1) == 0)
		return ("");
	ss = (char *) malloc ((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
