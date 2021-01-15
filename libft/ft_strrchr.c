#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len = ft_strlen(s);
    while (len != 0)
    {
    if(s[len] == (unsigned char)c)
        return ((char *)&s[len]);
    len--;
    }
    if(s[len] == (unsigned char)c)
        return ((char *)&s[len]);
    len--;
    return (NULL);
}