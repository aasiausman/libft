//erorr//

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	char	*ptr;

	if (size != 0 && count > __UINT32_MAX__/ size)
		return (NULL);
	ptr = malloc (count * size);
	if (ptr == 0)
	{
		return (ptr);
	}
	ft_bzero (ptr, count * size);
	return (ptr);
}

/*#include <stdio.h>
 int main()
{
     char str[] = "hanieh";
     ft_calloc(4, sizeof(char));
     printf("%p\n", str);
}/*

 
 
 
 
 
 
 /*if (size != 0 && count > UINT32_MAX / size)
 integer overflow when calculating the total memory size.
 too large to be safely stored in a 32-bit unsigned integer.*/
