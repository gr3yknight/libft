/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:13:28 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/04 03:44:33 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len1;
	unsigned int	len2;
	char			*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(set);
	str = (char *) malloc ((len1 + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (i < len1)
	{
		if (ft_strncmp(&s1[i], set, len2) == 0)
			i += len2;
		else
			str[j++] = s1[i++];
	}
	str[j] = '\0';
	return (str);
}

int main()
{
	char	*s1 = "  LXNNNYY  pepe  YYYNLX   ";
	char	*s2 = " XYYYYLN";
	printf("%s",ft_strtrim(s1, s2));
	return (0);
}
