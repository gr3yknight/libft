#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ss;
    size_t    i;

    ss = (char *) malloc ((len + 1)* sizeof(char));
    if (len == 0)
        return (NULL);
    i = 0;
    while (s[start + i] && i < len )
    {
        ss[i] = s[start + i];
        i++;
    }
    return (ss);
}

int main()
{
    char *str = "Hello everyone";
    printf("%s", ft_substr(str, 2, 3));
    return (0);
}