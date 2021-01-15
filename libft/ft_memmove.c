#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d_temp;
	unsigned char *s_temp;

	d_temp = dst;
	s_temp = (unsigned char *)src;

    if (dst <= src)
		return (ft_memcpy(dst, src, len));
    d_temp += len - 1;
    s_temp += len - 1;
    while (len !=0)
    {
        *d_temp-- = *s_temp--;
    len--;
    }
    return (dst);
}