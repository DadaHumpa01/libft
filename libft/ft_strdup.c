/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:41:25 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 15:43:03 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t  len;
    char    *dst;

    len = + ft_strlen(s1);
    dst = malloc(sizeof(char) * (len + 1));
    if(dst == NULL)
        return (NULL);
    ft_memcpy((void *)dst, (const void *)s1, len);
    dst[len] = '\0';
    return (dst);
}