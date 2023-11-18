#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr_fd (nb / 10, fd);
	}
	ft_putchar_fd (nb % 10 + '0', fd);
}

/*#include<string.h>
 int main()
{
	ft_putnbr_fd(-2147483648LL, 1);
}*/