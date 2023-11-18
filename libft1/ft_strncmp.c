#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (*str1 && *str2 && *str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	if (n)
		return (*str1 - *str2);
	else
		return (0);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
    char s1[] = "mycats";
    char s2[] = "mycatS";
    printf ("%d\n", ft_strncmp(s1, s2, 5));
    printf ("%d\n", strncmp (s1, s2, 6));
}*/

//The exact value of the negative or positive return is not 
// specified by the C standard.
//this funtion compares two strings, but only up to a certain length specified by n.
//
//