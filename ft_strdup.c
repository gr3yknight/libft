#include "libft.h"

char    *ft_strdup(char *src)
{
    int     i;
    char    *duplicate;

    duplicate = (char*) malloc(ft_strlen(src) * sizeof(char) + 1);
    if (!duplicate)
    {
        return (NULL);
    }
    i = 0;
    while (src[i])
        {
            duplicate[i] = src[i];
            i++;
        }
    return (duplicate);
}