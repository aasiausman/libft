#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	while (s2[i] != '\0')
		i++;
	if (*s2 == '\0')
		return ((char *)s1);
	if (len == 0) 
		return (NULL);
	while (*s1 != '\0' && *s2 != '\0' && len >= i)
	{
		a = 0;
		while (s1[a] == s2[a] && s2[a] != '\0')
		{
			a++;
		}
		if (s2[a] == '\0')
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
//{
/*#include<stdio.h>
 #include<string.h>
 int main()
 {
    char str1[] = "welcome to our home install";
    char str2[] = "to our";
    printf("%s\n", strnstr(str1, str2, 12));
    printf("%s\n", ft_strnstr(str1, str2, 12)); 
 }
 printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
 printf("%s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
}*/