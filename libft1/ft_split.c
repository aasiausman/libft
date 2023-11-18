#include "libft.h"

#include "libft.h"

size_t	word_count(const char *s, char c)
{
	size_t	count;
	size_t	j;

	count = 0;
	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			j = 0;
		}
		else if (!j)
		{
			j = 1;
			count++;
		}
		s++;
	}
	return (count);
}

size_t	counted_char(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	*ft_duplicate(const char *s, size_t i)
{
	char	*word;
	size_t	j;

	word = (char *)malloc(sizeof(char ) * (i + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (*s && j < i)
	{
		word[j] = *s;
		j++;
		s++;
	}
	word[j] = '\0';
	return (word);
}

void	ft_free(char **str)
{
	size_t	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**new_str;
	size_t	j;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	new_str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!new_str)
		return (NULL);
	j = -1;
	while (*s && ++j < count)
	{
		while (*s == c)
			s++;
		new_str[j] = ft_duplicate(s, counted_char(s, c));
		if (!new_str[j])
		{
			ft_free(new_str);
			return (NULL);
		}
		s += counted_char(s, c);
	}
	new_str[count] = NULL;
	return (new_str);
}

/* #include <stdlib.h>
 #include <stddef.h>
 int main() {
     const char *input = "This is a test string";
     char **result = ft_split(input, ' ');
     // Print the split strings
     for (size_t i = 0; result[i] != NULL; i++) {
         printf("%s\n", result[i]);
         free(result[i]); // Free each allocated string
     }
     free(result); // Free the array of pointers
     return 0;
 }*/