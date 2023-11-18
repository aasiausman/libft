#include "libft.h"

char *ft_strchr(const char *s, int c)
{
   while (*s != (char )c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
}
/*#include<stdio.h>
#include<string.h>
int main ()
{
 	char string[] = "hello";
	printf ("%s\n", ft_strchr(string, 'e'));
	printf ("%s\n", strchr(string, '\0'));
}*/

//this function helps you find a specific character in a string.
//const char *s is string in which we want to find a character.

