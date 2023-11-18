#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*#include<stdio.h>
#include<string.h>
int main ()
{
     char string[] = "hello cats";
    printf ("%s\n", ft_strrchr(string, 'e'));
}*/

//helps yoi fnd the last position of a specific character in a given string or tells you if that character is not in the string.
//c a character to search for.
//

