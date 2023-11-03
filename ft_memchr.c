#include "libft.h"

void    *ft_memchr(const void *s, int c, unsigned int n)
{
    unsigned int    i;
    unsigned char   *str;
    unsigned char   chr;

    str = (unsigned char *) s;
    chr = c;
    i = 0;
    while (i < n)
    {
    if (str[i] != chr)
        i++;
    else
        return (str + i);
    }
    return (NULL);
}