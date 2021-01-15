/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:01:27 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 16:54:46 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        if ((((unsigned char *)s1)[i]) != (((unsigned char *)s2)[i]))
            return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
        i++;
    }
    return (0);
}