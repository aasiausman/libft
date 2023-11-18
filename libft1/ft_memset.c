#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)b;
    while (len > i)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (ptr);
}

/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
 int	main(void)
 {
 
 	char ptr[] = "aasiar";
    printf("%s\n", ft_memset(ptr, 'a', 5));
    printf("%s\n", memset(ptr, 'a', 5));
 }*/

 //this function allows you to fill a block of memory with a specific value, byte by byte.
 //b a pointer to the memory block where you want to set values.
 //c the value you want to set in the memory block.
 //len The number of bytes
 //