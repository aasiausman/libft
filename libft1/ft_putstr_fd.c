#include "libft.h"

void	ft_putstr_fd(char	*s, int fd)
{
	if (!s)
	{
		return ;
	}
	write (fd, s, ft_strlen(s));
}
/*#include <stdio.h>
int main()
 {
 	ft_putstr_fd("hello, i love my cats", 1);
}*/

// this function that allows you to print a string
// fd. It sends the entire string, and the length of the string is determined by ft_strlen(s)