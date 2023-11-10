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

// static int	istrimmable(char *str, char a)
// {
// 	while (*str)
// 	{
// 		if (*str == a)
// 			return (1);
// 		str++;
// 	}
// 	return (0);
// }
// static int	the_counter(char const *s, char const *set)
// {
// 	int	counter;
// 	int	i;
// 	int	j;

// 	i = 0;
// 	e = ft_strlen(s);
// 	counter = 0;
// 	while (set[i])
// 	{
// 		if (istrimmable(*s, set[i]) == 1)
// 			counter++;
// 		i++;
// 	}
// 	return (counter);
// }

// static int	isEdge(char const *str, char c)
// {
// 	int	x;

// 	x = 0;
// 	while (*str)
// 	{
// 		if (istrimmable(str, c) == 1)
// 		{
// 			x++;
// 			str++;
// 		}
// 		return (x);
// 	}
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char			*str;
// 	int				len;
// 	unsigned int	x;
// 	int				bln;
// 	int				i;

// 	x = 0;
// 	bln = istrimmable(s1, set[i]);
// 	while (!s1)
// 	{
// 		if (istrimmable == 1)
// 			x++;
// 		return (x);
// 	}
// 	len = ft_strlen(s1) - the_counter(s1, set);
// 	str = ft_substr(s1, x, len);
// 	str[len] = '\0';
// 	return (str);
// }

static int	istrimmable(char const *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static int	isfirst(char const *str, char const *set)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (set[i])
	{
		if (istrimmable (str, set[i]) == 1)
		{
			counter++;
			str++;
			i = 0;
		}
		else
			i++;
	}
	return (counter);
}

static int	islast(char const *str, char const *set)
{
	int	e;
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	e = ft_strlen(str) - 1;
	while (e >= 0)
	{
		if (istrimmable(str + e, set[i]) == 1)
		{
			counter++;
			e--;
			i = 0;
		}
		else
			i++;
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		frt;
	int		lst;
	int		len;
	char	*str;

	frt = (isfirst(s1, set));
	lst = (islast(s1, set));
	len = ft_strlen(s1);
	str = (char *)malloc((ft_strlen(s1) - (frt + lst) + 1) * sizeof(char));
	str = (char *)ft_memcpy(str, s1 + frt, ft_strlen(s1) - (frt + lst));
	str[len - (frt + lst)] = '\0';
	return (str);
}

int main()
{
	char *str;
	char *set;

	str = "asdkjhsdf;lksdfiuy";
	set = "ayu";
	printf("%s", ft_strtrim(str, set));
	return(0);
}
