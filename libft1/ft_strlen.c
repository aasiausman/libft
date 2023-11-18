#include <unistd.h>
#include "libft.h"

size_t ft_strlen (const char *str)
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
            i++;
    return (i);
}

/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
 int main()
 {
     char str[] = "mycats";
     printf("%lu\n", ft_strlen(str));
}*/