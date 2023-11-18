#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    while (n > 0)
    {
        if (*p == (unsigned char)c)
        {
            return (p);
        }
        n--;
        p++;
    }
    return (NULL);

}

 /*#include <stdio.h>
 int main()
 {
 	char str[] = "aasia";
 	printf("%s", ft_memchr(str, 's', 3));
 }*/

//this function scans through a block of memory and checks if a 
//specific character is present. If it finds the character
//it returns the memory location where it found it.
//s is a pointer we want to search.
//c is the character we want to find in that memory.
//n is the size.
//*p to look for character c.
