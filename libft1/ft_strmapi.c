#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char example_function(unsigned int index, char c)
// {
//     // Here, we'll simply return the character converted to uppercase
//     if (c >= 'a' && c <= 'z') {
//         return c - 'a' + 'A';
//     }
//     return c;
// }

// int main(void)
// {
//     char input[] = "Hello, World!";
//     char *result;

//     result = ft_strmapi(input, &example_function);

//     if (result == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Original string: %s\n", input);
//     printf("Modified string: %s\n", result);

//     free(result);

//     return 0;
// }


//Applies the function ’f’ 
// to each character of the string ’s’
// takes a string and a mapping function as input. 
// It applies the mapping function to each character of the input string,
// creating a new string with the mapped characters,
// and returns a pointer to this new string. 