#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned int    i;
    char    *str1;
    char    *str2;

    str1 = (char*) src;
    str2 = (char*) dest;
    i = 0;
    while (str1[i] && i < n)
    {
        str2[i] = str1[i];
        i++;
    }
    return (str2);
}