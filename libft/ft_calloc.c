/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:13:53 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 17:27:43 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t *ptr;

    if(count == 0 || size == 0)
        count = size = 1;
    ptr = malloc(count * size);
    if (ptr)ft_bzero(ptr, count * size);
    
    return(ptr);
}