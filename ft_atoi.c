#include "libft.h"

int ft_atoi(const char *nptr)
{
    int     i;
    int     s;
    int     r;

    i = 0;
    s = 1;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '-')
    {
        s = -1;
        i++;
    }
    else if (nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
        r = r * 10 + nptr[i++] -'0'; 
    return (r * s);
}