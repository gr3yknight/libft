#include "libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int    i;
    int t;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        t = s1[i] - s2[i];
        if (t == 0)
            i++;
        else
        break;
    }
    return (t);
}