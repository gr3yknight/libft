#include "libft.h"

int	    ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    unsigned char   *str1;
    unsigned char   *str2;
    unsigned int    i;
    int             t;

    str1 = (unsigned char*) s1;
    str2 = (unsigned char*) s2;
    i = 0;
    if (n == 0)
        return (0);
    while ((str1[i] || str2[i]) && i < n)
    {
        t = str1[i] - str2[i];
        if (t != 0)
            break;
        else
            i++;
    }
    return (t);
}