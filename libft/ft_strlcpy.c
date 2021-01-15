/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:23:07 by dbrignon          #+#    #+#             */
/*   Updated: 2020/11/02 18:53:31 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t lenght;
	size_t i;

	lenght = 0;
	i = 0;
	while (dst[lenght] != '\0')
		lenght++;
	if (dstsize != 0)
	{
		while (dst[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenght);
}
