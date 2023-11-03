#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
    if (dest == NULL || src == NULL)
        return (NULL);
    unsigned int    i;
    char    *str1;
    char    *str2;
    
    str1 = (char *) src;
    str2 = (char *) dest;
    i = 0;
    if (str1 < str2 && str1 + n > str2)
    {
        while (str1[i] && i < n)
        {
            str2[i] = str1[i];
            i++;
        }
    }
    else
        ft_memcpy(str2, str1, n);
    return (str2);
}