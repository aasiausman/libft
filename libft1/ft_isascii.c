#include "libft.h"

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
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
    int a = 128;
    printf("%d\n", ft_isascii(a));
    printf("%d\n", isascii(a));
}*/