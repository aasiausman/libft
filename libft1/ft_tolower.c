#include "libft.h"

int ft_tolower(int c)
{
    if( c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return (c);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
	int a = 'M';
	printf("%c\n", ft_tolower(a));
	printf("%c\n", tolower(a));
}*/
