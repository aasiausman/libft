#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    a = 'a';
    printf("%c\n", ft_toupper(a));
    printf("%c\n", toupper(a));
}*/