#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;
    const unsigned char *str1;
    const unsigned char *str2;

	i = 0;
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
	while (n > i)
    {
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
    }    
	return (0);
}

/*#include <stdio.h>
 int main()
 {
     char str1[] = "aasia";
     char str2[] = "cat";
     printf ("%d", ft_memcmp(str1, str2, 6));
 }*/

 // this function compares two blocks of memory and returns a value.
 // n is the number of bytes you want to compare in the two memory blocks.