#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(s1);
	i = 0;
	ptr = (char *) malloc(sizeof(*ptr) * len + 1);
	if (ptr != NULL)
	{
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
#include<stdio.h>
int main()
{
 	char str1[] = "hello";
 	char str2[] = "helo";
 	char *str3;
 	str3 = ft_strdup(str2);
 	printf("%s\n", str3);
}