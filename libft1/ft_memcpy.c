//erorr//S

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t len)
{
    size_t			i;
	char			*dst1;
	const char		*src1;

	dst1 = (char *)dst;
	src1 = (const char *)src;
	if (len == 0 || dst1 == src1)
		return (dst1);
	i = 0;
	while (len > i)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
/*#include <stdio.h>
int	main(void)
{
	char	src1[];

	src1[] = "hanieh";
	char dest [] = "khaled";
	printf("%s", ft_memcpy(dest, src1, 4));
}*/