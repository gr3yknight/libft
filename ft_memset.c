#include "libft.h"

void    *ft_memset(void *s, int c, unsigned int n)
{
    unsigned char *str;
    unsigned char a;
    unsigned int i;

    str = s;
    a = c;
    i = 0;
    while (i < n)
    {
        str[i] = a;
        i++;
    }
    return (str);
}