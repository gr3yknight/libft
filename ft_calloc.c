#include "libft.h"

char	*ft_calloc(unsigned int nmemb, unsigned int size)
{
    char    *str;

    str = (char *) malloc (nmemb * size);
    if (str = NULL)
        return (NULL); 
    else
    return (str);    
}