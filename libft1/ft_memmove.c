#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
   unsigned char		*dst1;
	unsigned char		*src1;

	if ((dst == NULL && src == NULL ))
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst < src)
	{
		while (len--)
		{
			*dst1++ = *src1++;
		}
	}
	else
	{
		dst1 = ((unsigned char *)dst + len - 1);
		src1 = ((unsigned char *)src + len - 1);
		while (len--)
		{
			*dst1-- = *src1--;
		}
	}
	return (dst);
}
//when len is equal to 0,it will fail with everything
/*#include<stdio.h>
#include<string.h>
 int main()
 {
     char str[100] = "Learningisfun";
     char *first, *second;
     first = str;
     second = str;
     printf("Original string :%s\n ", str);
     //when overlap happens then it just ignore it
     memcpy(first + 8, first, 10);
     printf("memmove overlap : %s\n ", str);
     // when overlap it start from first position
    ft_memmove(second + 8, first, 10);
     printf("ft_memmove overlap : %s\n ", str);
     return 0;
}*/

// this function copies bytes from source to destination even when they overlap, and it handles both forward and backward copying.
//
//
//