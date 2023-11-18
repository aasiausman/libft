#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
    size_t  i;
    size_t  a;

    i = 0;
    a = 0;
    while (s2[i] != '\0')
        i++;
    if (*s2 == '\0' || s2 == NULL)
        return ((char *)s1);
    if (len == 0 || *s2 == 0)
        return (NULL);
    while (*s1 != '\0' && len >= i)
    {
        while (s1[a] == s2[a] && s2[a] != '\0')
            a++;
        if (s2[a] == '\0' || s2 == NULL)
            return ((char *)s1);
        s1++;
        len--;
    }
    return (NULL);

}