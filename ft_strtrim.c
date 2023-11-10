

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char    *str;
	int     i;
	int		e;

	if (s1 == NULL && set == NULL)
		return (NULL);
	i = 0;
	e = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[e - 1]))
		e--;
	str = ft_substr(s1, i, e - i);
	if (str == NULL)
		return(NULL);
	return (str);
}
