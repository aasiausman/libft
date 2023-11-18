#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned	int, char*))
{
	unsigned int	i;
	unsigned int	len;

	if (s == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include<stdio.h>
#include<stdio.h>
int main ()
{
     char string[] = "Hello, World!";
      char *result;
     ft_striteri(string, uppercase_char);
	 printf("%s\n", string);
}
 //void uppercase_char(unsigned int index, char *c)
{
     if (*c >= 'a' && *c <= 'z')
     {
         *c =  *c - ('a' - 'A');
     }
      return c;
 	 printf("%d\n%c\n",index, c);
}*/