/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:08:59 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 15:40:32 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*memd;
	unsigned const char	*mems;
	size_t				i;

	memd = dst;
	mems = src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		memd[i] = mems[i];
		i++;
	}
	return (dst);
}
