#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    len1;
    unsigned int    len2;
    char    *str1;
    char    *str2;
    char    *str3;
    
    if (s1 == NULL || set == NULL)
        return (NULL);
    str1 = (char *) s1;
    str2 = (char *) set;
    len1 = ft_strlen(str1);
    len2 = ft_strlen(str2);
    str3 = (char *) malloc (len1  * sizeof(char) + 1);
    i = 0;
    j = 0;
    while (i < len1)
    {
        if (ft_strncmp(&str1[i], str2, len2) == 0)
            i += len2;
        else
            str3[j++] = str1[i++];
    }
    str3[j] = '\0';
    return (str3);
}