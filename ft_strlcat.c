#include "libft.h"
#include <string.h>

unsigned int    ft_strlcat(char* dest, const char *src, unsigned int size)
{
    unsigned int    slen;
    unsigned int    dlen;
    unsigned int    tlen;
    unsigned int    i;

    slen = strlen(src);
    dlen = strlen(dest);
    i = 0;
    if (size == 0)
        tlen = slen;
    else if (size < dlen)
    {
            tlen = slen + size;
    }
    else if (size > dlen)
    {
        while (src[i] && (i + dlen) < size - 1)
        {
            dest[i + dlen] = src[i];
            i++;
        }
        dest[i + dlen] = '\0';
        tlen = dlen + slen;
    }
    return (tlen);
}

#include <stdio.h>

int main()
{
    char arr1[] = "Hello ";
    char arr2[] = "everyone";
    printf("%d\n", ft_strlcat(arr1, arr2, 80));
    return (0);
}