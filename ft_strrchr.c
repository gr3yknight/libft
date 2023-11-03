#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *p;
    int     i;
    int     l;

    p = (char *)s;
    l = ft_strlen(p) - 1;
    i = l;
    while (s[i])
    {
        if (s[i] == c)
            return (p + i);
        i--;
    }
    return (0);
}