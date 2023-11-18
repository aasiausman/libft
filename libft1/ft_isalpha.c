#include "libft.h"

int ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%i", ft_isalpha('1'));
	printf("%i", isalpha('.'));
}*/
