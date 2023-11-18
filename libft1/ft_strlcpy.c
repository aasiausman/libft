//erorrs int main//

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = dstsize - 1;
	i = 0;
	if (dstsize != '\0')
	{
		while (src[i] != '\0' && len > i)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
#include <stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
 	char src[20] = "hello";
 	char dest[20]= "cats";
	printf("%zu\n", ft_strlcpy(dest, src, 2));
 	printf("%zu\n", strlcpy(dest, src, 2));
 	printf("%s", dest);
}

//returns the total length of the string that would have been copied,
// if there was unlimited space. 
//Copies up to dstsize - 1 characters from the string src to dst,
//   NUL-terminating the result if dstsize is not 0.
//   The main difference between strncpy and strlcpy is in the return value:
//  returns the number of characters copied.
// Another difference is that strlcpy always stores one nul in the destination.


