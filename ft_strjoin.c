#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    lenS1;
    unsigned int    lenS2;
    unsigned int    len;
    char *fString;
    char *str1;
    char *str2;

    str1 = (char *) s1;
    str2 = (char *) s2;
    lenS1 = ft_strlen(str1);
    lenS2 = ft_strlen(str2);
    len = lenS1 + lenS2;
    fString = (char *) malloc (len * sizeof(char) + 1);
    i = 0;
    j = 0;
    if (str1 == NULL && str2 == NULL)
        return (NULL);
    else if (str2 == NULL)
        fString = str1;
    else if (str1 == NULL)
        fString = str2;
    else
    {
        while (str1[i])
        {
            fString[i] = str1[i];
            i++;
        }
        while (str2[j])
        {
            fString[i + j] = str2[j];
            j++;
        }
    }
    fString[i + j] = '\0';
    return (fString);
}

int main()
{
    char *s1 = "Hello ";
    char *s2 = "everyone";
    printf("%s", ft_strjoin(s1, s2));
    return (0);
}