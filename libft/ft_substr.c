#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t c;
 
    c = 0;
    str = malloc(len + 1);
    if (str == NULL)
        return (NULL);
	while (start < len)
	{
		str[c] = s[start];
		c++;
        start++;
	}
    str[len] = '\0';
    return (str);
}