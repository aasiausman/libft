#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
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
int	main(void)
{
	printf( "%i", ft_isprint('	'));
}*/







/*int main()
{
    int a = 65;
    printf("%d\n", ft_isprint(a));
    printf("%d\n", isprint(a));
}/*