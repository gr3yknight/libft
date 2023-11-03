#include "libft.h"

unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len;
    char    *str;

    str = (char *) src;
    i = 0;
    len = ft_strlen(str);
    if (size == 0)
        return (len);
    while (str[i] && i < size)
    {
        dest[i] = str[i];
        i++;
    }
    return (len);
}