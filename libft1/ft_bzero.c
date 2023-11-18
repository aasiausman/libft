#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	ft_memset(s, 0, n);
}

// this function is to clear a specific amount of memory//
// s: The memory we want to clear
//n: The number of bytes we want to clear in that memory