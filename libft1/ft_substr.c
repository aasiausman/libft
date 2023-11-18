#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	size_t	msize;
	char	*str;

	if (!s)
		return (NULL);
	msize = ft_strlen(&s[start]);
	if (len > msize)
		len = msize;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	size = ft_strlen(s);
	i = start;
	j = 0;
	while (i < size && j < len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = 0;
	return (str);
}
/*int main()
 {
 	char str1[] = "aasia usman";
 	char str2[] = "aasia";
 	printf ("%s", ft_substr(str1, 0, 2));
}*/