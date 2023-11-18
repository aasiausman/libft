#include "libft.h"

int	digit_count(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != '\0')
	{
		n /= 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	bool	sign;

	sign = n < 0;
	count = digit_count(n) + sign;
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = 0;
	if (sign)
	{
		*str = '-';
		count--;
		str[count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (count > sign)
	{
		count--;
		str[count] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
#include<stdio.h>
#include<string.h>
int main ()
{
 	 char *i1 = ft_itoa(-623);
 	 char *i2 = ft_itoa(156);
 	char *i3 = ft_itoa(-0);
 	printf("%s\n",i3);
    printf("%d\n", strcmp(i1, "-623"));
}

//while (count-- - sign)
// this logic works as long as the value is greater than or equal to 0.
// count-- is used to go the last place available.
// str[count] = n % 10 + '0';
//		n /= 10;
// adding them from backward before '/0'
// integer to ascii