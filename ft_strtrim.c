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



//char	*ft_strtrim(char const *s1, char const *set)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	len1;
// 	unsigned int	len2;
// 	char			*str;

// 	if (s1 == NULL || set == NULL)
// 		return (NULL);
// 	len1 = ft_strlen(s1);
// 	len2 = ft_strlen(set);
// 	str = (char *) malloc ((len1 + 1) * sizeof(char));
// 	i = 0;
// 	j = 0;
// 	while (i < len1)
// 	{
// 		if (ft_strncmp(&s1[i], set, len2) == 0)
// 			i += len2;
// 		else
// 			str[j++] = s1[i++];
// 	}
// 	str[j] = '\0';
// 	return (str);
// }
// xyzxyzxyz r achid weld nass xyzzzzzxyz 8  21 substr(str, 8 , 21 - 8 + 1);
//xyz

static int	isTrimmable(char *str, char a)
{
	while (*str)
	{
		if (a == *str)
			return 1;
		str++;
	}
	return (0);
}
static int	the_counter(char const *s, char const *set)
{
	int	counter;
	int i;
	int	j;

	i = 0;
	j = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == set[j])
		{
			i++;
			counter++;
			j = 0;
		}
		j++;
	}
	return (counter);
}

static int	isEdge(char const *str, char *set)
{
	int i = 1;
	while (*str)
	{
		if (*str == *set)
			str++;
		set++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) - the_counter(s1, set);
	
	str[len] = '\0';
	return (str);
}