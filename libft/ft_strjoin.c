#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t len_s1;
    size_t len_s2;
    char *ptr;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    ptr = malloc(len_s1 + len_s2 + 1);
    if (ptr == NULL)
        return (NULL);
    ft_memcpy(ptr, s1, len_s1);
    ft_memcpy(ptr + len_s1, s2, len_s2);
    ptr[len_s1 + len_s2] = '\0';
    return (ptr);
}