
#include "libft.h"

void *ft_memchr(void const *s, int c, size_t n)
{
    size_t i;
    unsigned const char *mems;

    mems = s;
    i = 0;
    while (i < n)
    {
        if (mems[i] == (unsigned char)c)
            return ((void *)&s[i]);
        i++;
    }
    return NULL;
}
