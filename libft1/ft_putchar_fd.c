#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// this function allows you to send a single character to a specific place
//fd stands for file descriptor
//fd: This is where you want to send the character
//&c: the address of the character 
//1: bytes you want to send
//write function to send the character to a specific location