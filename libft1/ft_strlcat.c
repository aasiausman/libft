#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned int	d_len;
	unsigned int	a;
	unsigned int	len;
	unsigned int	s_len;

	a = 0;
	if (dstsize == '\0')
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	len = dstsize - 1;
	if (dstsize > d_len)
	{
		while (src[a] != '\0' && a < (len - d_len))
		{
			dst[d_len + a] = src[a];
			a++;
		}
		dst[d_len + a] = '\0';
		return (s_len + d_len);
	}
	else
		return (s_len + dstsize);
}



#include <stdio.h>
#include <string.h>
int main()
{
    char src[20] = "i am ";
 	char dest[20] = "aasia";
 	printf("%s\n", dest);
	printf("%s\n", src);

	unsigned int i = ft_strlcat(dest , src, 10); 
	printf("%u\n", i);
}
 //returns the intial length of dst plus the length of src.
 //The condition j < (len - d_len) ensures that the loop only copies characters 
 //if there is space available in the destination buff