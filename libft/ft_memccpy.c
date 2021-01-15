/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:32:35 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 17:42:10 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *memd = dest;
	unsigned const char *mems = src;
	unsigned long i;

	i = 0;
	while (i < n)
	{
		memd[i] = mems[i];
		if (mems[i] == (unsigned char)c)
			return (&memd[i + 1]);
		i++;
	}
	return (NULL);
}
