#include "libft.h"

char    *ft_strmapi(char const  *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    int len;
    char    *str;
    
    if (s == 0)
        return (0);
    i = 0;
    len = ft_strlen ((char *)s);
    str = malloc ((len + 1) * sizeof(char));
    if (str == 0)
        return (0);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}